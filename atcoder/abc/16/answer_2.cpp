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
    int A, B, C;
    cin >> A >> B >> C;
    if (B == 0)
    {
        if (C == A)
        {
            cout << '?' << endl;
        }
        else
        {
            cout << '!' << endl;
        }
    }
    else
    {
        if (C == A + B)
        {
            cout << '+' << endl;
        }
        else if (C == A - B)
        {
            cout << '-' << endl;
        }
        else
        {
            cout << '!' << endl;
        }
    }
    return 0;
}
