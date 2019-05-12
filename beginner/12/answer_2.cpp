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
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        while (a % 2 == 0 || a % 3 == 2)
        {
            res++;
            a--;
        }
    }

    cout << res << endl;
}