#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a <= 5)
    {
        cout << 0 << endl;
    }
    else if (a >= 6 && a <= 12)
    {
        cout << b / 2 << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}
