#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
    // Variable initialization.
    int number,ctcount,consecutive,lastnum;
    vector<int> ctvec;
    int target;

    // Error check for parameters. If parameters exceed 2 or are less than 2 an error message is returned.
    if (argc < 2 || argc > 2){
        cerr << "Usage: " << "Consecutive" << " NUM" << endl;
    }
    // String conversion and parameter condition checking.
    else{
        // Converting string to integer from first parameter.
        istringstream targetstr(argv[1]);

        // Checking to ensure no characters were entered after the integer and to ensure successful conversion.
        if(!((targetstr >> target) && targetstr.eof() && target >= 2))
            cerr << "Invalid entry: " << argv[1] << ". " << "Please enter a valid integer >= 2. " <<'\n';
    }

    // Integer input.
    cin >> number;
    ctvec.push_back(number);

    // Error checking to ensure first entry is >= 1. Program quits if a character is encountered.
    if (!(number >=1) && cin.fail()){
        cerr << "Invalid number: " << number << ". " << "Number must be >= 1. "<<'\n';
        return 1;
    }

    // Setting variable conditions.
    ctcount = 1;
    consecutive = 0;

    // Main while loop running until the target number of consecutive numbers are found.
    while (consecutive != 1){
		cin >> lastnum;
        // Checking for EOF (CTRL +D) entry. Loop breaks and if any consecutive numbers were found entries are returned.
        if (cin.eof()){
            break;
        }
        // Error checking to ensure entries are >= 1. Program quits if a character is encountered.
        else if (!(lastnum >=1) && cin.fail()){
            cerr << "Invalid number: " << number << ". " << "Number must be >= 1. "<<'\n';
            return 1;
        }

        // Checking to see if the last number entered is 1 greater than the previous entry.
        if (lastnum == number + 1) {

            // Condition passed and entry is pushed into vector.
            ctvec.push_back(lastnum);

            // Last number entered becomes number.
            number = lastnum;

            // Counter increased when consecutive number is found.
            ctcount = ctcount + 1;
        }
        // Condition when the numbers are not consecutive.
        else if (lastnum != number +1){
            // Clearing the vectors of any previous consecutive numbers.
			ctvec.clear();
            // Resetting ctcount variable.
			ctcount = 1;

            number = lastnum;
            ctvec.push_back(number);
        }
        // Exit condition if the number of consecutive numbers matches the target.
        if (ctcount == target){
            consecutive = 1;
        }

    }
    // Printing sequence of consecutive numbers if they are found.
    if (consecutive == 1){
            cout << "Sequence found: ";
        for (int i = 0; i<ctvec.size();i++){
            cout << ctvec[i] << " ";
        }
            cout <<endl;

    }
    return 0;
}
