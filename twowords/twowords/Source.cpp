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
#include <map>

using namespace std;
vector <int> returnwords(vector <string>, vector <string>);
vector <string> elimnfind(vector <string>, vector<int>);
void maskgen();

int main() {
	
	cout << "Enter letter collection" << endl;
	string input;
	cin >> input;

	string binletters = letters2bits(input);

	return 0;
}

void maskgen() {

		//first create the map of the letters that we can use as indices
		map<string, int> bindict = {
			{ "a", 0 },
			{ "b", 0 },
			{ "c", 0 },
			{ "d", 0 },
			{ "e", 0 },
			{ "f", 0 },
			{ "g", 0 },
			{ "h", 0 },
			{ "i", 0 },
			{ "j", 0 },
			{ "k", 0 },
			{ "l", 0 },
			{ "m", 0 },
			{ "n", 0 },
			{ "o", 0 },
			{ "p", 0 },
			{ "q", 0 },
			{ "r", 0 },
			{ "s", 0 },
			{ "t", 0 },
			{ "u", 0 },
			{ "v", 0 },
			{ "w", 0 },
			{ "x", 0 },
			{ "y", 0 },
			{ "z", 0 }
	};

	string line;
	ifstream myfile("wordlist.txt");
	if (myfile.is_open())
	{
		vector <string> bitvec;
		while (getline(myfile, line))
		{
			map<string, int> temp_bin_dict = bindict;
			string bit_mask = "";
			string temp_key;
			
			for (int i = 0; i < line.length(); i++) {
				temp_key = line[i];
				temp_bin_dict[temp_key] = 1;

				
				}

			for (auto& kv : temp_bin_dict) {
			bit_mask = bit_mask + to_string(kv.second);
			
			}
			bitvec.push_back(bit_mask);
		}
		myfile.close();

		ofstream bitfile;
		bitfile.open("bit_words.txt");

		for (int i = 0; i < bitvec.size(); i++) {
			bitfile << bitvec[i] << endl;
		}
		bitfile.close();
	}


	else cout << "Unable to open file";

}

vector <int> returnwords(vector <string> letters, vector <string> bit_words) {
	vector <int> indices;
	for (int i = 0; i < bit_words.size(); i++) {
		if (letters[i] == bit_words[i]) {
			indices.push_back(i);
		}
	}
	return indices;

}

vector <string> elimnfind(vector <string> word_list, vector<int> indices, int length_param) {
	vector <string> word_matches;
	for (int i = 0; i < indices.size(); i++) {
		if (word_list[indices[i]].length() == length_param) {
			word_matches.push_back(word_list[indices[i]]);
		}

	}
}

string letters2bits(string input) {
	map<string, int> bindict = {
		{ "a", 0 },
		{ "b", 0 },
		{ "c", 0 },
		{ "d", 0 },
		{ "e", 0 },
		{ "f", 0 },
		{ "g", 0 },
		{ "h", 0 },
		{ "i", 0 },
		{ "j", 0 },
		{ "k", 0 },
		{ "l", 0 },
		{ "m", 0 },
		{ "n", 0 },
		{ "o", 0 },
		{ "p", 0 },
		{ "q", 0 },
		{ "r", 0 },
		{ "s", 0 },
		{ "t", 0 },
		{ "u", 0 },
		{ "v", 0 },
		{ "w", 0 },
		{ "x", 0 },
		{ "y", 0 },
		{ "z", 0 }
	};
	map<string, int> temp_bin_dict = bindict;
	string bit_mask = "";
	string temp_key;

	for (int i = 0; i < input.length(); i++) {
		temp_key = input[i];
		temp_bin_dict[temp_key] = 1;


	}

	for (auto& kv : temp_bin_dict) {
		bit_mask = bit_mask + to_string(kv.second);

	}
	return bit_mask;
}