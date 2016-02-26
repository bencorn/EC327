//============================================================================
// Name        : twowords.cpp
// Author      : Benjamin Corn, Ryan Morano
// Version     : 0.00
// Copyright   : Boston University
// Description : Game
//============================================================================

//============================================================================
// AUTHOR1: Benjamin Corn bcorn@bu.edu
// AUTHOR2: Ryan Morano rmorano@bu.edu
// AUTHOR3:
//============================================================================

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

vector <string> fileopen();

int main() {


	cout << "hello" << endl;
	cout << "hello" << endl;
}

vector <string> fileopen() {
	vector <string> words;
	string line;
	ifstream myfile("wordlist.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			words.push_back(line);
		}
		myfile.close();
	}


	else cout << "Unable to open file";
	return words;
}