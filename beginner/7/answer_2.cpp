#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;
    int ans = 0, c = 0;
    for (int i = 100; i > 0; i--)
    {
        if (A % i == 0 && B % i == 0)
        {
            c++;
            if (c >= K)
            {
                ans = i;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}