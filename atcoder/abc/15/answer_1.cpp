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
    string A, B;
    cin >> A >> B;
    if (A.size() > B.size())
        cout << A << endl;
    else
        cout << B << endl;
    return 0;
}
