#include <iostream>
#include "WorkQueue.h"
#include <ctime>
#include <cstdlib>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <chrono>
std::atomic<bool> working{ false };
std::atomic<bool> quit{ false };
std::atomic<int> produced{ 0 };
std::atomic<int> consumed{ 0 };
WorkQueue jobs;
std::mutex cout_mutex;
void producer() {
	std::cout << "P" << std::endl;
	while (true) {
		if (working) {
			jobs.push(rand() % 100);
			produced++;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		else {
			if (quit) {
				std::cout << "P-bye" << std::endl;
				return;
			}
			std::this_thread::yield();
		}
	}
}
void consumer(int id) {
	while (true) {
		if (working || jobs.size() > 0) {
			int n = jobs.pop();
			int sz = jobs.size();
			consumed++;
			cout_mutex.lock();
			std::cout << sz << ": " <<
				id <<
				" processed " << n << std::endl;
			cout_mutex.unlock();
		}
		else {
			std::cout << "C-bye" << std::endl;
			if (quit) return;
		}
	}
}
int main() {
	srand(time(0));
	std::vector<std::thread> producers;
	std::vector<std::thread> consumers;
	for (int i = 0; i < 10; ++i) {
		producers.push_back(std::thread(producer));
	}
	for (int i = 0; i < 5; ++i) {
		consumers.push_back(std::thread(consumer, i));
	}
	// boss thread 
	working = true;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	working = false;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	working = true;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	working = false;
	quit = true;
	for (auto& t : producers) {
		t.join();
	}
	std::cout << "Producers all finished\n";
	for (auto& t : consumers) {
		t.join();
	}
	std::cout << "consumers all finished\n";
	std::cout << "Produced " << produced << std::endl;
	std::cout << "Consumed " << consumed << std::endl;
}