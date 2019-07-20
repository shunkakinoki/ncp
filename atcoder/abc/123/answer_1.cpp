#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, k, diff;
    cin >> a >> b >> c >> d >> e >> k;

    diff = e - a;

    if (diff <= k)
        cout << "Yay!";
    else
        cout << ":(";

    return 0;
}