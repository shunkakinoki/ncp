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
    int n, X;
    cin >> n >> X;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((X & (1 << i)) != 0)
        {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}