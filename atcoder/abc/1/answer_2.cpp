#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, n;
    cin >> N;
    n = N / 1000;
    if (N < 100)
    {
        cout << "00" << endl;
    }
    else if (N < 1000)
    {
        cout << "0" << N / 100 << endl;
    }
    else if (N <= 5000)
    {
        cout << N / 100 << endl;
    }
    else if (6000 <= N && N <= 30000)
    {
        cout << n + 50 << endl;
    }
    else if (35000 <= N && N <= 70000)
    {
        cout << 80 + (n - 30) / 5 << endl;
    }
    else if (70000 < N)
    {
        cout << 89 << endl;
    }
}
