//============================================================================
// Name        : visisorsum.cpp
// Author      : Benjamin Corn
// Version     : 1.00
// Copyright   : Boston University
// Description : Prints the proper divisor sum of the integers from 2 to 1000.
//============================================================================

//============================================================================
// AUTHOR1: Benjamin Corn bcorn@bu.edu
// AUTHOR2:
// AUTHOR3:
//============================================================================


#include <iostream>
using namespace std;

int main() {
	// Initialization of integer variables.
	int count,i,j,k,sum;

	// Initialization of maximum size integer array.
	int divisors [15] = {};

	// For loop starting at 2, incrementing by 1, and ending at 1000.
	for (i = 2; i<=1000; i++){
		sum = 1;
		// Count variable to determine the number of divisors.
		count = 0;
		for (j = 1; j<=i-1; j++){
			if (i % j == 0){
				count++;
				divisors[count] = j;
			}

		}
		cout << i << ": " << "1 ";
		for (k = 2; k<=count; k++){
			cout << "+ " << divisors[k] << " ";
			sum = sum + divisors[k];
		}
		divisors [15] = 0;
		cout << "= " << sum;
		cout << endl;
		sum = 0;
	}

	return 0;
}
