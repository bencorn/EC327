//============================================================================
// Name        : tttwinner.cpp
// Author      : Benjamin Corn, Ryan Morano
// Version     : 0.05
// Copyright   : Boston University
// Description : Classifies tic tac toe boards if won, tied, invalid, or in play.
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

// Prototyping functions to be used in program.
int classify(string line);
void codeparser(vector <string> games);
vector <string> fileopen();

int main() {
	// Vector to store game boards.
	vector <string> games;

	// Calling function to open and parse file.
	games = fileopen();

	// Detects current board state and writes to file.
	codeparser(games);

	return 0;

}

int classify(string line)
{
	// Detects current board state through several validity checks.

	vector <char> xvec;
	vector <char> ovec;
	vector <char> pound;
	
	// Line by line detection of x, o, and # characters on board. 
	// Each character is stored in their respective vectors.
	for (int i = 0; i <= line.size(); i++) {
		if (line[i] == 'x')
			xvec.push_back(line[i]);
		else if (line[i] == 'o')
			ovec.push_back(line[i]);
		else if (line[i] == '#')
			pound.push_back(line[i]);
	}
	// int wins provides variable detection for number of wins on a given board.
	int wins = 0;

	// If any of these conditions are met, the board is considered invalid -- code 5 is returned for invalid.
	// There cannot be more than 5 x's on any given board.
	// There cannot be more than 4 o's on any given board.
	// There cannot be less x's than o's. x goes first by default.
	// There cannot be more o's than x's. x goes last by default.
	// There must always be a difference of 1 between the amount of x's and o's on the board.

	if (xvec.size() > 5 || ovec.size() > 4 || xvec.size() < ovec.size() || ovec.size() > xvec.size() || (xvec.size() - ovec.size()) > 1)
		return 5; // Return 5 if board is invalid.

	// Begin checking for winning board sequences. Row, column, and diagonal detection.
	else if (line[0] == 'x' && line[1] == 'x' && line[2] == 'x') {
		wins++; // If a win is detected, increment win count.
		if (wins <= 1 && xvec.size() > ovec.size()) // Only one winner per board is possible. If x wins, there must be more x's than o's.
			return 1; // Return 1 if x wins.
		else
			return 5;
	}
	else if (line[3] == 'x' && line[4] == 'x' && line[5] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[6] == 'x' && line[7] == 'x' && line[8] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[0] == 'x' && line[3] == 'x' && line[6] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[1] == 'x' && line[4] == 'x' && line[7] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[2] == 'x' && line[5] == 'x' && line[8] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[0] == 'x' && line[4] == 'x' && line[8] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[2] == 'x' && line[4] == 'x' && line[6] == 'x') {
		wins++;
		if (wins <= 1 && xvec.size() > ovec.size())
			return 1;
		else
			return 5;
	}
	else if (line[0] == 'o' && line[4] == 'o' && line[8] == 'o') {
		wins++;
		if (wins <= 1)
			return 2; // Return 2 if o wins.
		else
			return 5;
	}
	else if (line[0] == 'o' && line[1] == 'o' && line[2] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[3] == 'o' && line[4] == 'o' && line[5] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[6] == 'o' && line[7] == 'o' && line[8] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[0] == 'o' && line[3] == 'o' && line[6] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[1] == 'o' && line[4] == 'o' && line[7] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[2] == 'o' && line[5] == 'o' && line[8] == 'o'){
		wins ++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[0] == 'o' && line[4] == 'o' && line[8] == 'o'){
		wins ++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (line[2] == 'o' && line[4] == 'o' && line[6] == 'o') {
		wins++;
		if (wins <= 1)
			return 2;
		else
			return 5;
	}
	else if (pound.size() == 0) // If no wins & there are no open moves, game is tied.
		return 3; // Return 3 for tied game.
	else
		return 4; // Return 4 for continued game.

	if (wins > 1) // If multiple wins exist (both x and o win or multiple wins from x or o)
		return 5; // Return 5 for invalid game.
	
}

// codeparser function and file opener function.
void codeparser(vector <string> games) {
	ofstream tttstatus;
	tttstatus.open("tttstatus.txt");
	for (int i = 0; i < games.size(); i++) {
		int code = classify(games[i]);
		if (code == 1)
			tttstatus << games[i] << " " << 'x' << endl;
		else if (code == 2)
			tttstatus << games[i] << " " << 'o' << endl;
		else if (code == 3)
			tttstatus << games[i] << " " << 't' << endl;
		else if (code == 4)
			tttstatus << games[i] << " " << 'c' << endl;
		else if (code == 5)
			tttstatus << games[i] << " " << 'i' << endl;
		cout << endl;
	}
	tttstatus.close();
}

vector <string> fileopen() {
	vector <string> games;
	string line;
	ifstream myfile("tictactoeboards.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			games.push_back(line);
		}
		myfile.close();
	}
	

	else cout << "Unable to open file";
	return games;
}
