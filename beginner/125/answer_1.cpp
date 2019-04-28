#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int A, T, B, SUM, times;
    cin >> A >> B >> T;
    times = T / A;
    SUM = times * B;
    cout << SUM << endl;
    return 0;
}