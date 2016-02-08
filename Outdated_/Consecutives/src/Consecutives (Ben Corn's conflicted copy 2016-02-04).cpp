#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>

using namespace std;

int main() {
    int target,number,ctcount,count,consecutive,lastnum;
    vector<int> tempvec;
	vector<int> ctvec;

    cout << "Enter the target number of consecutive terms." << endl;
    cin >> target;

    cout << "Enter an integer" << endl;
    cin >> number;

    //int tempvec [2] = {};
    //tempvec[1] = number;

    //tempvec.push_back(number);
    ctcount = 1;

    //int ctarray[6] = {};
    //count = 0;
    consecutive = 0;

    while (consecutive != 1){
    	cout << "Enter an integer" << endl;
		cin >> lastnum;
		ctvec.push_back(number);

        if (lastnum == number + 1) {

            ctvec.push_back(lastnum);
            number = lastnum;
            ctcount = ctcount + 1;
        }
        else if (lastnum != number +1){
			ctvec.clear();
			ctcount = 1;

            number = lastnum;
            //ctcount = 1;
        }

        if (ctcount == target){
            consecutive = 1;
        }

    }
    return 0;
}
