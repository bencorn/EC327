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

vector <string> fileopen(int length);



void maskgen(void);


int main() {
    
    string default_letters = "aadekmmnortww";
    vector <string> letters;
    
    void maskgen();
    
    
    
    
    
    for (int i = 1; i < default_letters.length(); i++)
        
        }



void maskgen() {
    
    vector<string>
    
    //first create the map of the letters that we can use as indices
    map<string, int> bindict= {
        {"a", 0},
        {"b", 0},
        {"c", 0},
        {"d", 0},
        {"e", 0},
        {"f", 0},
        {"g", 0},
        {"h", 0},
        {"i", 0},
        {"j", 0},
        {"k", 0},
        {"l", 0},
        {"m", 0},
        {"n", 0},
        {"o", 0},
        {"p", 0},
        {"q", 0},
        {"r", 0},
        {"s", 0},
        {"t", 0},
        {"u", 0},
        {"v", 0},
        {"w", 0},
        {"x", 0},
        {"y", 0},
        {"z", 0}
    };
    
    ofstream bitfile;
    bitfile.open("bit_words.txt")
    
    string line;
    ifstream myfile("wordlist.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            temp_bin_dict = bindict;
            string bit_mask = "";
            for (i = 0; i < line.length(); i++){
                temp_bin_dict[line[i]] = 1;
                
                for (auto& kv: bindict){
                    bit_mask = bit_mask + kv.second
                }
                
                
            }
            bitfile << bit_mask
        }
        myfile.close();
        bitfile.close();
    }
    
    
    else cout << "Unable to open file";
    return words;
    
}









//
//    // load the "twowords" text file
//
//
//    void maskgen(int length) {
//        vector <string> words;
//        string line;
//        ifstream myfile("wordlist.txt");
//            while (getline(myfile, line))
//            {
//                string temp_word;
//                temp_word = line;
//
//            }
//
//
//        ofstream newfile;
//        newfile.open("bit_words.txt")
//        newfile << words;
//
//
//
//
//        myfile.close();
//        newfile.close();
//    }
//
//
//
//
//}
//
//
//
//
//
//vector <string> fileopen(int length) {
//	vector <string> words;
//	string line;
//	ifstream myfile("wordlist.txt");
//	if (myfile.is_open())
//	{
//		while (getline(myfile, line))
//		{
//			string temp_word;
//			temp_word = line;
//			if (temp_word.length() > length)
//				words.push_back(line);
//		}
//		myfile.close();
//	}
//
//
//	else cout << "Unable to open file";
//	return words;
//}
