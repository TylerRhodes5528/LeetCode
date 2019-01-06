// Main file for my LeetCode Solutions
// Author: Tyler Rhodes
#include <iostream>
#include "Solutions/Problem11.cpp"

int main() {
	//--------Exit Variables Init------------------
	bool exit = false;
	char exitChoice;
	//---------------------------------------------
	Solution3 test;
	std::vector<int> testVect = { 2, 3, 4, 5, 18, 17, 6 };

	std::cout << test.maxArea(testVect);

	while (!exit) {

		//-------------Exit Choice--------------------------------------
		std::cout << "Would you like to restart the program? (Y or N): ";
		std::cin >> exitChoice;
		while (exitChoice != 'Y' && exitChoice != 'y' && exitChoice != 'N' && exitChoice != 'n') {
			std::cout << "Enter Y or N: ";
			std::cin >> exitChoice;
		}
		if (exitChoice == 'N' || exitChoice == 'n') {
			exit = true;
		}
	}

	return 0;
}