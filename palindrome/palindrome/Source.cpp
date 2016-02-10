//============================================================================
// Name        : multibase.cpp
// Author      : Benjamin Corn, Ryan Morano
// Version     : 0.01
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
#include <algorithm>

using namespace std;
void palindromo(int);
int reverser(int);

int main() {

	int number, test;
	

	// Test value for palindromo function.
	number = 100;

	// Making call to palindromo function.
	palindromo(number);




	return 0;
}

void palindromo(int number) {
	// Base conversion.
	int base = 2;
	int numtemp;
	vector<int> digits;
	vector<int> digits_reversed;

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

		digits_reversed = digits;
		reverse(digits_reversed.begin(), digits_reversed.end());
		if (digits_reversed == digits) {
			for (int j = 0; j < digits_reversed.size(); j++) {

				cout << digits[j];

			}
			cout << endl;
		}


		digits.clear();

	}
	int pause;
	cin >> pause;

}

//vector <int> reverser(vector<int> digits_reversed) {
//	// Function to reverse the order of the digits.
//	for (int i = 0; i < digits_reversed.size(); i++) {
//
//	}
//
//}