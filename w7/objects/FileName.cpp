# include <iostream>
# include <string>
using namespace std;
class Simple
{
public:
	string someText;
	void print()
	{
		cout << someText << endl;
	}
};


int main()
{
	Simple i;
	Simple s;
	Simple t;
	Simple u;
	s.someText = "Hello";
	t.someText = "Goodbye";
	u.someText = "and again";
	s.print();
	t.print();
	u.print();

	cout << "enter stuff: ";
	cin >> i.someText;

	i.print();

}
