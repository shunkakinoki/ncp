#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s, t, r = "atcoder";
    int i, j, x;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '@')
            for (j = 0; j < 7; j++)
                t[i] - r[j] ? 0 : s[i] = t[i];
        if (t[i] == '@')
            for (j = 0; j < 7; j++)
                s[i] - r[j] ? 0 : t[i] = s[i];
    }
    cout << (s == t ? "You can win" : "You will lose") << endl;
}
