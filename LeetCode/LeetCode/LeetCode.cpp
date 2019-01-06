// Main file for my LeetCode Solutions
// Author: Tyler Rhodes

#include <iostream>

int main() {
	//--------Exit Variables Init------------------
	bool exit = false;
	char exitChoice;
	//---------------------------------------------

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