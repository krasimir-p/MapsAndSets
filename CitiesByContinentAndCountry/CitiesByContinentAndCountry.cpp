#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, map<string, set<string>>> continentCountryCity;
    int countInputs;
    cin >> countInputs;

    for (int i = 1; i <= countInputs; i++) {
        string continent, country, city;
        cin >> continent >> country >> city;
        continentCountryCity[continent][country].insert(city);
    }

    for (auto itr = continentCountryCity.begin(); itr != continentCountryCity.end(); itr++) {
        cout << itr->first << ':' << endl;
        for (auto itrCountry = itr->second.begin(); itrCountry != itr->second.end(); itrCountry++) {
            cout << itrCountry->first << " -> ";
            bool isFirst = true;
            for (auto itrCity = itrCountry->second.begin(); itrCity != itrCountry->second.end(); itrCity++) {
                if (isFirst) {
                    isFirst = false;
                }
                else {
                    cout << ", ";
                }
                cout << *itrCity;
            }
            cout << endl;
        }
    }
    return 0;
}
