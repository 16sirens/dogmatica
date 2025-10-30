#include <iostream>
#include <bitset>
using namespace std;

int main() {

	int8_t a = 81;
	int8_t b = 67;
	int8_t c = 0b01010101;
	int8_t d = 0b10101010;
	int8_t f = 4;


	// masks
	int8_t b0mask = 0b00000001;
	int8_t b1mask = 0b00000010;
	int8_t b2mask = 0b00000100;
	int8_t b3mask = 0b00001000;
	int8_t b4mask = 0b00010000;
	int8_t b5mask = 0b00100000;
	int8_t b6mask = 0b01000000;
	int8_t b7mask = 0b10000000;

	// ORing
	int8_t e;
	e = c ^ d;

	cout << "dec: " << dec << +e << " hex: " << hex << +e << " bin: " << bitset<8>(e) << endl;

	// using a mask
	int8_t flags;
	flags = a | b0mask;
	cout << " bin: " << bitset<8>(flags) << endl;

	//multiplying by shifting bits
	int8_t q8;
	q8 = b << 2;
	cout << "dec: " << dec << +q8 << endl;


	return 0;
}