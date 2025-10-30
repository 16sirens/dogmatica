#include <iostream>

int main() {

	// initialise array and fill it
	std::string customers[2][5];

	
	for (int i = 0; i < 5; i++) {

		std::cout << "Enter customer name: ";
		std::cin >> customers[0][i];
		
		std::cout << "\nNumber of shirts: ";
		std::cin >> customers[1][i];

	}
	
	std::string pickupName;
	std::cout << "\nEnter pickup customer name: ";
	std::cin >> pickupName;

	for (int i = 0; i < 5; i++) {

		if (pickupName == customers[0][i]) {
			std::cout<< customers[0][i] << " is picking up " << customers[1][i] << " shirts.\n";
			customers[1][i] += " - Picked up";
			std::cout << customers[1][i];
		}
	}

	
	return 0;
}