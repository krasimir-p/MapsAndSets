#include <bits/stdc++.h>

using namespace std;

int main()
{
    string direction;
    string regNumber;
    set<string> sRegNumbers;
    while (cin >> direction, direction != "END") {
        cin >> regNumber;
        if (direction == "IN,") {
            sRegNumbers.insert(regNumber);
        }
        else {
            //set<string>::iterator itr = find(sRegNumbers.begin(), sRegNumbers.end(), regNumber);
            sRegNumbers.erase(regNumber);
        }
    }
    if (sRegNumbers.size()) {
        for (auto itr = sRegNumbers.begin(); itr != sRegNumbers.end(); itr++) {
            cout << *itr << endl;
        }
    }
    else {
        cout << "Parking Lot is Empty" << endl;
    }

    return 0;
}
