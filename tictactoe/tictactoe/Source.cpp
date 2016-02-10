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
	int pause;
	cin >> pause;

	for (int i = 0; i < games.size(); i++) {
		classify(games[i])
	}


	return 0;

}

int classify(string line)
{
	//if (line[1] == "X" && line[5] == "X" && line[9] == "X")


	return 0;
}
