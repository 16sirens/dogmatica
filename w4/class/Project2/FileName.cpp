#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	const int number_of_items = 9;
	int shopping_array[number_of_items];

	for (int i = 0;i < number_of_items;i++)
	{
		cout << "please enter item price: ";
		cin >> shopping_array[i];
	}


	sort(std::begin(shopping_array), std::end(shopping_array));
	cout << "You can get a discount on the 1st item: " << shopping_array[0] << ", the 4th item: " << shopping_array[3] << " and the 7th item: " << shopping_array[8];

	return 0;
}