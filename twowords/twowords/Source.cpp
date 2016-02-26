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
#include <string.h>

using namespace std;

vector <string> fileopen(int length);

int main() {

	string default_letters = "aadekmmnortww";
	vector <string> letters;

	for (int i = 1; i < default_letters.length(); i++)

}

vector <string> fileopen(int length) {
	vector <string> words;
	string line;
	ifstream myfile("wordlist.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			string temp_word;
			temp_word = line;
			if (temp_word.length() > length)
				words.push_back(line);
		}
		myfile.close();
	}


	else cout << "Unable to open file";
	return words;
}