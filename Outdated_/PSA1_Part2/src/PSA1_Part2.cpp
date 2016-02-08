//============================================================================
// Name        : visisorsum.cpp
// Author      : Benjamin Corn, Ryan Morano, Darshan Padmanabhan
// Version     : 1.25
// Copyright   : Boston University
// Description : Prints the first 100000 happy numbers.
//============================================================================

//============================================================================
// AUTHOR1: Benjamin Corn bcorn@bu.edu
// AUTHOR2: Ryan Morano rmorano@bu.edu
// AUTHOR3: Darshan Padmanabhan darshanp@bu.edu
//============================================================================

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
int i,j,k,total,count,boolex,happycount,happy10;

vector<int> digits;
vector<int> printholder;

//int digits [10] = {};
//int printholder [10] = {};
happycount = 0;
happy10 = 0;

for (i = 1;happycount <= 100000;i++){
		total = 0;
		count = 0;
		boolex = 0;

		digits.push_back(i % 1000000 / 100000);
		digits.push_back(i % 100000 / 10000);
		digits.push_back(i % 10000 / 1000);
		digits.push_back(i % 1000 / 100);
		digits.push_back(i % 100 / 10);
		digits.push_back(i % 10);

		while (boolex != 1) {
			if (count >= 1){

				digits.push_back(total % 1000000 / 100000);
				digits.push_back(total % 100000 / 10000);
				digits.push_back(total % 10000 / 1000);
				digits.push_back(total % 1000 / 100);
				digits.push_back(total % 100 / 10);
				digits.push_back(total % 10);
			}
			total = 0;

			// Squares each digit and adds them together.
			for (j=0;j<=5;j++){
				digits.at(j) = pow(digits.at(j),2);
				total = total + digits.at(j);
			}
			digits.clear();
			vector<int>().swap(digits);
			count = count +1;

			// Determine if number is happy or not and store into print holder.
			// happy10 is the happy number counter.
			if (total == 1){
				happy10 = happy10 + 1;
				printholder.push_back(i);
				happycount = happycount + 1;
				boolex = 1;
			}
			// If the total is equal to 4, we know the number is unhappy.
			else if (total == 4){
				boolex = 1;
			}

			// Print and release vector if it is 10 elements full.
			if (happy10 == 10){
				for (k=0;k != printholder.size();++k){
					cout << printholder[k] << " ";
				}
				happy10 = 0;
				//printholder[10] = {};
				cout <<endl;
				printholder.clear();
				vector<int>().swap(printholder);
			}

		}
}
return 0;

}
