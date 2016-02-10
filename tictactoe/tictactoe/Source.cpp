//============================================================================
// Name        : tttwinner.cpp
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
#include <string>
#include <fstream>

using namespace std;

int classify(string line);

int main() {
	string line;
	ifstream myfile ("tictactoeboards.txt");
	vector <string> games;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			games.push_back(line);
		}
		myfile.close();
	}

	else cout << "Unable to open file";
	

	for (int i = 0; i < games.size(); i++) {
		classify(games[i]);
	}


	return 0;

}

int classify(string line)
{
	vector <char> xvec;
	vector <char> ovec;
	for (int i = 1; i < line.size(); i++) {
		if (line[i] == 'x')
			xvec.push_back(line[i]);
		else if (line[i] == 'o')
			ovec.push_back(line[i]);
	}

	return xvec.size();

	/*if (line[1] == 'x' && line[5] == 'x' && line[9] == 'x')
		return 1;
	else if (line[1] == 'o' && line[5] == 'o' && line[9] == 'o')
		return 1;*/
	return 0;
}
