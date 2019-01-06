// Template for console while loop

#include <iostream>

int main() {
	bool exit = false;
	char exitChoice;

	while (!exit) {

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