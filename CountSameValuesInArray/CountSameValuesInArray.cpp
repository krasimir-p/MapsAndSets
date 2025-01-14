//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <utility>

using namespace std;

int main()
{
    string inputLine;
    map<float, int> mNumbers;
    vector<float> vNumbers;
    pair <map<float, int>::iterator, bool> insRes;
    float number;

    getline(cin, inputLine);
    istringstream istr(inputLine);

    while (istr >> number) {
        insRes = mNumbers.insert({ number, 1 });
        if (insRes.second) {
            vNumbers.push_back(number);
        }
        else {
            mNumbers[number]++;
        }
    }

    for (const float& currNumber : vNumbers) {
        cout << currNumber << " - " << mNumbers[currNumber] << " times" << endl;
    }

    return 0;
}
