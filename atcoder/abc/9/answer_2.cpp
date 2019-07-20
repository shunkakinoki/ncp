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
    int n;
    cin >> n;
    vector<int> a(n);
    cinf(n, a);
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[0] != a[i])
        {
            cout << a[i] << endl;
            return 0;
        }
    }
}
