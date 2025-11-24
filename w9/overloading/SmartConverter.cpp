#include "SmartConverter.h"




// constructor and destructor must have the same name as the class
SmartConverter::SmartConverter()
{
	cout << "contstructor";
}

SmartConverter::~SmartConverter()
{
	cout << "destructor";
}


//function defined here
void SmartConverter::convert(float amount, string units)
{

	cout << "converting " << amount << " into " << units << endl;

}
