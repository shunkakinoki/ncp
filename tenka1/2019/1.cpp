#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A < C && C < B)
        cout << "Yes" << endl;
    else if (B < C && C < A)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}