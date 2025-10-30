#include <iostream>
#include <cstdlib>;
using namespace std;

int main()
{
	string user[2];
	string dealer[2];
	string deck[52] = { "2S","3S","4S","5S","6S","7S","8S","9S","10S","AS","JS","QS","KS",
						"2C","3C","4C","5C","6C","7C","8C","9C","10C","AC","JC","QC","KC",
						"2D","3D","4D","5D","6D","7D","8D","9D","10D","AD","JD","QD","KD",
						"2H","3H","4H","5H","6H","7H","8H","9H","10H","AH","JH","QH","KH" };


	user[0] = deck[rand() % 53];
	user[1] = deck[rand() % 53];

	dealer[0] = deck[rand() % 53];
	dealer[1] = deck[rand() % 53];

	if ((user[0] == "AS" || "AC" || "AD" || "AH") && (user[1] == "AS" || "AC" || "AD" || "AH"))





	return 0;
}

