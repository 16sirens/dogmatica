#include <iostream>
using namespace std;

int main() {
	// initialise n and ask for height of pyramid
	int height = 0;
	bool goodInput = false;

	cout << "enter height: ";
	cin >> height;
	cout << endl;

	// input validation - doesnt like characters or big numbers
	while (goodInput == false) {

		if (height >= 1 && height <= 9) {
			goodInput = true;
		}
		else {
			cout << "Please enter a valid height (1-9): ";
			cin >> height;
			cout << endl;
		}
	}

	// for loop to cycle through each rows
	for (int iRow = 1; iRow <= height; iRow++) {

		// for loop for the spaces in each row
		for (int space = 1; space <= height - iRow; space++) {
			cout << " ";
		}

		int num = 1;
		//one gazillion breakpoints later! it works!
		bool mid = false;
		for (int whatever = 1; whatever <= iRow * 2 - 1; whatever++) {
			
			cout << num;
			if (num < iRow && !mid) {
				num++;
			}
			else if (num >= iRow || mid) {
				mid = true;
				num--;
			}
		}
		cout << endl;
	}
	return 0;	
}