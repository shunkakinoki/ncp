#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long a[5];
    long long N;
    long long b[6] = {0};

    cin >> N;

    for (int j = 0; j < 5; j++)
    {
        cin >> a[j];
    }

    long long ans = 0;
    b[0] = N;

    while (b[5] != N)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i - j == 1 && b[j] != 0)
                {
                    if (a[j] <= b[j])
                    {
                        b[i] += a[j];
                        b[j] -= a[j];
                    }
                    else
                    {
                        b[i] += b[j];
                        b[j] = 0;
                    }
                }
            }
            ans++;
        }
    }
    cout << ans << endl;
}