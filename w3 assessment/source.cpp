#include <iostream>
using namespace std;

int main() {
	// initialise n and ask for height of pyramid
	int n = 0;
	bool goodInput = false;

	cout << "Enter the height of the pyramid (1-9): ";
	cin >> n;
	cout << endl;

	// input validation for integers 1 to 9 - doesnt like characters or big numbers
	while (goodInput == false) {

		if (n >= 1 && n <= 9) {
			goodInput = true;
		}
		else {
			cout << "Please enter a valid height (1-9): ";
			cin >> n;
			cout << endl;
		}
	}

	// for loop to cycle through each rows
	for (int i = 1; i <= n; i++) {

		// nested for loop for the spaces in the start of each row
		for (int space = 1; space <= n - i; space++) {
			cout << " ";
		}

		// initialising num to be the start for each row
		int num = 1;

		// boolean to find middle then decrement output numbers
		bool middle = false;

		// nested loop for traversing all 2n-1 chars
		// outputs number, incriments, checks if middle, goes back down to 1
		for (int counter = 1; counter <= i * 2 - 1; counter++) {
			
			cout << num;
			if (num < i && !middle) {
				num++;
			}

			else if (num >= i || middle) {
				middle = true;
				num--;
			}
		}

		// nested loop to fill remaining spaces... with spaces
		for (int space = 1; space <= n - i; space++) {
			cout << " ";
		}

		// starts new line
		cout << endl;
	}
	return 0;	
}