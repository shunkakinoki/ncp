#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

#define cinf(n, x)                \
    for (int i = 0; i < (n); i++) \
        cin >> x[i];

using namespace std;

int main()
{
    string S;
    cin >> S;
    string before = S.substr(0, 2);
    string after = S.substr(2, 4);
    int a = stoi(before);
    int b = stoi(after);
    if (a >= 1 && a <= 12 && b >= 1 && b <= 12)
        cout << "AMBIGUOUS" << endl;
    else if (a >= 1 && a <= 12 && b >= 0 && b <= 99)
        cout << "MMYY" << endl;
    else if (a >= 0 && a <= 99 && b >= 1 && b <= 12)
        cout << "YYMM" << endl;
    else
        cout << "NA" << endl;
}