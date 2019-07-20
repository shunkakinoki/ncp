#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n;
    vector<int> s(4, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s[c - '1']++;
    }
    cout << *max_element(s.begin(), s.end()) << " " << *min_element(s.begin(), s.end()) << endl;
    return 0;
}