#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<sstream>
int main() {
	std::ifstream inFile;
	inFile.open("quiz.txt");
	if (inFile.fail()) {
		std::cerr << "File not opened \n";
		exit(1);
	}
	int count = 0;
	std::vector<std::string> question;
	std::vector<std::string> answer;
	std::vector<std::string> rightAnswer;
	std::string buffer;
	while (!inFile.eof()) {
		std::getline(inFile, buffer);
		if (buffer.size() != 0) {
			if (buffer[buffer.size() - 1] == '?' && buffer.size() > 1) {
				question.push_back(buffer);
			}
			if (buffer[buffer.size() - 1] != '?' && buffer.size() > 1)
			{
				answer.push_back(buffer);
			}
			if (buffer.size() == 1) {
				rightAnswer.push_back(buffer);
			}
		}
	}
	std::cout << "Welcome to Rick and Morty Trivia !\n\n";
	std::cout << "your answer should be between 0 and 3 \n\n";
	std::stringstream ss;
	std::string space{ "     " };
	std::string input;
	bool condition = true;
	int Qindex = 0;
	int Aindex = 0;
	int RAindex = 0;
	int points = 0;
	while (condition) {
		condition = false;
		if (Aindex < answer.size() || Qindex < question.size() || RAindex < rightAnswer.size()) {
			condition = true;
			std::cout << question[Qindex] << std::endl;
			ss << answer[Aindex] << space << answer[Aindex + 1] << space << answer[Aindex + 2] << space << answer[Aindex + 3] << std::endl;
			std::cout << ss.str();
			std::cin >> input;
			ss.str("");
			if (input == rightAnswer[RAindex]) {
				std::cout << "correct!\n";
				points += 10;
				std::cout << "you gained 10 points\n";
				std::cout << "you have " << points << " points\n\n";
				system("pause");
			}
			else {
				std::cout << "incorrect!\n";
				std::cout << "you have " << points << " points\n\n";
				system("pause");
			}
			Qindex += 1;
			Aindex += 4;
			RAindex += 1;
			system("cls");
		}
	}
	system("cls");
	std::cout << "Congratulations you have completed the trivia !\n\n";
	std::cout << "You scored " << points << " points out of 120\n\n";
}