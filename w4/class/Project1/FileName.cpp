#include <iostream>
using namespace std;

int main() {
	int cart[6];
	for (int i = 0;i < 6;i++) {
		cout << "Enter price of items(highest to lowest): ";
		cin >> cart[i];
	}
	// assumes input is valid, according to the slides
	cout << "You can get a discount on item 3 and item 6 " << endl;
	cout << "Giving you a total discount of: ";
	cout << cart[2] + cart[5];

	return 0;
}