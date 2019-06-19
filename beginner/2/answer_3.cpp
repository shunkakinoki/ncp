#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;
    printf("%.2f\n", (double)abs(xb * yc - yb * xc) * 0.5);
    return 0;
}
