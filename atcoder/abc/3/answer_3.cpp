#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    double k, e = 0;
    cin >> n >> k;
    double r[n];
    for (int i = 0; i < n; i++)
        cin >> r[i];
    sort(r, r + n);
    for (int i = n - k; i < n; i++)
    {
        if (e < r[i])
            e = (e + r[i]) / 2.0;
    }
    printf("%.16f", e);
}