#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, ans = 0;
    cin >> n;
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] > b[i])
        {
            ans += a[i] - b[i];
        }
    }
    cout << ans << endl;
    return 0;
}