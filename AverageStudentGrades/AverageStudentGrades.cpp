#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, vector<float>> mvStudentsRecords;
    int countRecords;
    cin >> countRecords;

    string record;
    string name;
    float grade;
    float averageGrade;
    vector<float> vGrades;

    for (int i = 1; i <= countRecords; i++) {
        cin >> name >> grade;
        mvStudentsRecords[name].push_back(grade);
    }

    cout << fixed << setprecision(2);
    for (pair<string, vector<float>> pCurrStudent : mvStudentsRecords) {
        averageGrade = 0;
        cout << pCurrStudent.first << " -> ";
        for (float currGrade : pCurrStudent.second) {
            cout << currGrade << ' ';
            averageGrade += currGrade;
        }
        cout << "(avg: " << averageGrade / pCurrStudent.second.size() << ')' << endl;
    }
    return 0;
}
