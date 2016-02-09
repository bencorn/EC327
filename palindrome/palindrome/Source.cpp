//============================================================================
// Name        : multibase.cpp
// Author      : Benjamin Corn, Ryan Morano
// Version     : 0.00
// Copyright   : Boston University
// Description : Returns all integers x such that Y in base x is palindromic
//============================================================================

//============================================================================
// AUTHOR1: Benjamin Corn bcorn@bu.edu
// AUTHOR2: Ryan Morano rmorano@bu.edu
// AUTHOR3:
//============================================================================

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main() {

	int number, test;
	void palindromo(int);

	number = 16;

	palindromo(number);




	return 0;
}

void palindromo(int number) {
	int base = 2;
	int numtemp;
	vector<int> digits;

	for (int i = 2; i <= number - 1; i++) {
		int quotient = number;
		int numtemp = number;
		while (quotient != 0) {
			int remainder = 0;


			quotient = numtemp / i;
			remainder = numtemp % i;

			digits.push_back(remainder);
			numtemp = quotient;
		}

		for (int j = 0; j < digits.size(); j++)
			cout << digits[j] << endl;

		cout << endl;
		digits.clear();

	}
	int pause;
	cin >> pause;

}