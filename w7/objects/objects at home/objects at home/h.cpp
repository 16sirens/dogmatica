# include <iostream>
# include <string>

using namespace std;

class Book {

public:
	string title;
	string author;

	void displayInfo()
	{

		cout << "Author: " << author << "\nTitle: " << title;

	};

};

class Student {
public:

	string name;
	int grade;


	void display()
	{
		cout << name << ", " << "Grade: " << grade << endl;

	};


};

int main() {

	Book book1;
	book1.title = "java is the best";
	book1.author = "idiot 1";

	book1.displayInfo();
	cout << "\n\n";

	Student student1;
	Student student2;

	student1.name = "Alice";
	student1.grade = 85;
	student2.name = "Bob";
	student2.grade = 92;
	
	student1.display();
	student2.display();

	if (student1.grade > student2.grade) 
	{

		cout << student1.name << " has the higher grade.";

	}
	else
	{
		cout << student2.name << " has the higher grade.";
	}
}