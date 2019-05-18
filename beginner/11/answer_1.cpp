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
    int N;
    cin >> N;

    if (N == 12)
        N = 1;
    else
        N = N + 1;

    cout << N << endl;
    return 0;
}
