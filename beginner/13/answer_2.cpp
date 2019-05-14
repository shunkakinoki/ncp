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

    for (int i = 0; i < S.length(); i++)
    {
        if (i == 0)
            S[i] = toupper(S[i]);
        else
            S[i] = tolower(S[i]);
    }

    cout << S << endl;
    return 0;
}