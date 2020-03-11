#include <map>
#include <iostream>
#include <string>
#include <fstream>
int main() {
	std::map<std::string, int> m;
	std::fstream inFile;
	inFile.open("fox.txt", std::ios::app | std::ios::in | std::ios::out);
	if (inFile.fail()) {
		std::cerr << "File not opened \n";
		exit(1);
	}
	std::string buffer;
	int i = 1;
	while (!inFile.eof()) {
		inFile >> buffer;
		for (int i = 0; i < buffer.size(); i++) {
			if (ispunct(buffer[i])) {
				buffer.erase(buffer.begin()+i);
				i -= 1;
			}
			else {
				buffer[i]=std::tolower(buffer[i]);
			}
		}
		auto p = m.find(buffer);
		if (p != m.end())
			p->second += 1;
		else
			m.insert(std::pair<std::string, int>(buffer,i));
	}
	for (auto it : m) {
		std::cout << it.first << " " << it.second << std::endl;
	}


}