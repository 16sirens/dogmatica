#include <iostream>
using namespace std;



class Service
{
public: 
	// attributes
	string serviceName;
	int duration; 
	int cost;

};

class Pet
{
public:
	// attributes
	string petName;
	string petOwner;
	string species;
	string breed;
	string service;
	string schedule;
	int age;

};

class Customer
{
public:
	//attributes
	string name;
	Pet petOne;

	//functions
	void registeredPets()
	{
		cout << "Enter pet name: ";
		cin >> petOne.petName;
		cout << "\nEnter pet species: ";
		cin >> petOne.species;
		cout << "\nEnter pet breed: ";
		cin >> petOne.breed;
		cout << "\nEnter pet age: ";
		cin >> petOne.age;

	}

};


//unholy commentless code


int main()
{

	Service bathing;
	Service nailTrimming;
	Service haircut;

	bathing.cost = 50;
	bathing.duration = 3;
	bathing.serviceName = "Bathing";

	nailTrimming.cost = 10;
	nailTrimming.duration = 1;
	nailTrimming.serviceName = "Nail Trimming";

	haircut.cost = 25;
	haircut.duration = 2;
	haircut.serviceName = "Haircut";


	Customer dude1;
	dude1.name = "joe";
	dude1.registeredPets();
	

	cout << "\nService for pet: ";
	cin >> dude1.petOne.service;

	cout << "\nSchedule for pet: ";
	cin >> dude1.petOne.schedule;

	cout << dude1.petOne.schedule;


	cout << "\nhi";
	return 0;
}