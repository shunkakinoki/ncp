#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int A, B;
    double T;
    cin >> A >> B >> T;
    int answer = 0;

    cout << ((int)((T + 0.5) / A)) * B << endl;
    return 0;
}