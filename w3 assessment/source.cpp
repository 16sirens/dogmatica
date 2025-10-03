#include <iostream>
using namespace std;

int main() {
	// initialise n and ask for height of pyramid
	int n = 0;
	bool goodInput = false;

	cout << "Enter the height of the pyramid (1-9): ";
	cin >> n;
	cout << endl;

	// input validation - doesnt like characters or big numbers
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

		// for loop for the spaces in the start of each row
		for (int space = 1; space <= n - i; space++) {
			cout << " ";
		}

		int num = 1;
		//one gazillion breakpoints later! it works!
		bool middle = false;
		for (int whatever = 1; whatever <= i * 2 - 1; whatever++) {
			
			cout << num;
			if (num < i && !middle) {
				num++;
			}
			else if (num >= i || middle) {
				middle = true;
				num--;
			}
		}
		for (int space = 1; space <= n - i; space++) {
			cout << " ";
		}
		cout << endl;
	}
	return 0;	
}