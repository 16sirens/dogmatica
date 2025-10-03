#include <iostream>
using namespace std;

int main() {
	// initialise n and ask for height of pyramid
	int n = 0;
	cout << "enter height: ";
	cin >> n;
	cout << endl;


	for (;n >= 0;n--){
		int counter = 1;
		int number = 1;
		for (int i = 1; i <= n; i++) {
			cout << " ";
		}
		while (number > 0) {

			if (number < counter) {
				cout << number;
				number++;
			}
			else if (number == counter) {
				cout << number;
				number--;

			}
		}

		counter += 1;
		cout << endl;
	}

	return 0;
}