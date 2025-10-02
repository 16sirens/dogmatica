#include <iostream>
using namespace std;

int main() {
	// initialise n and ask for height of pyramid
	int n = 0;
	cout << "enter height: ";
	cin >> n;
	cout << endl;
	// for loop to uh... tbc
	for (; n >= 1; n--) {
		for (int x = n; x >= 2; x--) {
			cout << " ";
		}
		int i = 1;
		while (i <= n) {
			cout << i;
			if (i <= n) {
				i++;
			}
		}
		cout << endl;
	}
	cout << "hep";
	return 0;
}