//============================================================================
// Name        : multibase.cpp
// Author      : Benjamin Corn, Ryan Morano
// Version     : 0.03
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

int main() {

	// Initializing variables.
	int number;
	

	// Test value for palindromo function.
	cout << "Enter the number to test for palindromicity: ";
	cin >> number;


	// Making call to palindromo function.
	palindromo(number);

	return 0;
}

void palindromo(int number) {
	// Base conversion.
	int base = 2;
	int numtemp;

	// Initializing digits & digits_reversed vectors.
	vector<int> digits;
	vector<int> digits_reversed;

	// Converting input int to bases between 2 and n-1.
	for (int i = 2; i <= number - 1; i++) {
		int quotient = number;
		int numtemp = number;
		// Base conversion while loop.
		while (quotient != 0) {
			int remainder = 0;


			quotient = numtemp / i;
			remainder = numtemp % i;

			// Storing digits of conversion in vector "digits"
			digits.push_back(remainder);
			numtemp = quotient;
		}

		// Copying digits vector to digits_reversed
		digits_reversed = digits;

		// Reversing vector
		reverse(digits_reversed.begin(), digits_reversed.end());

		if (digits_reversed == digits) {
			// Print base conversions out, one per line.
			/*for (int j = 0; j < digits_reversed.size(); j++) {
				cout << digits[j];

			}*/

			// Output base if palindrome exists.
			cout <<i << endl;
		}

		// Clearing vector for next base.
		digits.clear();

	}
	/*int pause;
	cin >> pause;*/

}
