#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A > B)
        cout << A * 2 - 1;
    else if (A < B)
        cout << B * 2 - 1;
    else if (A == B)
        cout << A + B;

    return 0;
}