// A collection of my solutions to LeetCode problems

#include <iostream>


int main() {
	bool exit = false;
	char exitChoice;

	while (!exit) {

		std::cout << "Would you like to restart the program? (Y or N): ";
		std::cin >> exitChoice;
		while (exitChoice != 'Y' && exitChoice != 'y' && exitChoice != 'N' && exitChoice != 'n') {

		}
	}

	return 0;
}