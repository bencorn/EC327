//============================================================================
// Name        : Test.cpp
// Author      : Software Engineer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int count,i,j,k;
	int divisors [15] = {};
	//int sum = 0;


	for (i = 2; i<=20; i++){
		count = 0;
		for (j = 1; j<=i-1; j++){
			if (i % j == 0){
				count++;
				divisors[count] = j;
			}

		}
		for (k = 1; k<=count; k++){
			cout << divisors[k] << " ";
		}
		divisors [15] = 0;
		cout << endl;
	}

	return 0;
}
