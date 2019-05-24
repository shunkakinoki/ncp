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
    int n, num = 0;
    cin >> n;
    vector<int> a(n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
        if (0 < a.at(i))
        {
            num += a.at(i);
            c++;
        }
    }
    cout << (num + c - 1) / c << endl;
}
