#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int n;
string s[55];
map<string, int> mp;

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
        mp[s[i]]++;

    int mx = 0;
    string mx_s;
    for (auto x : mp)
    {
        if (x.second > mx)
            mx = x.second, mx_s = x.first;
    }
    cout << mx_s << endl;

    return 0;
}