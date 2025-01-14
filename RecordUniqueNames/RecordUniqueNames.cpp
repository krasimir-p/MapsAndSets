#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> vNames;
    string name;

    int number;
    cin >> number;
    for (int i = 1; i <= number; i++) {
        cin >> name;
        if (find(vNames.begin(), vNames.end(), name) == vNames.end()) {
            vNames.push_back(name);
        }
    }

    for (vector<string>::iterator itr = vNames.begin(); itr != vNames.end(); itr++) {
        cout << *itr << endl;
    }

    return 0;
}
