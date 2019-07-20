#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

#define MOD (1000000000 + 7)

int main()
{
    int R, C, X, Y, D, L;

    cin >> R >> C >> X >> Y >> D >> L;

    int N = R * C;
    vector<vector<long long>> c(N + 1, vector<long long>(N + 1));
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i + 1)
            {
                c[i][j] = 1;
            }
            else
            {
                if (i > 0)
                {
                    c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % MOD;
                }
            }
        }
    }
    long long ans;
    if (X * Y == D + L)
    {
        ans = (R - X + 1) * (C - Y + 1);
        ans = ans * c[X * Y][D] % MOD;
    }
    else
    {
        ans = 0;
        for (int i = 0; i < 0x10; i++)
        {
            int bit0 = (i >> 0) & 1;
            int bit1 = (i >> 1) & 1;
            int bit2 = (i >> 2) & 1;
            int bit3 = (i >> 3) & 1;
            int XX = X;
            int YY = Y;
            if (bit0)
                XX--;
            if (bit1)
                YY--;
            if (bit2)
                XX--;
            if (bit3)
                YY--;
            if (XX * YY < D || XX * YY - D < L)
            {
                continue;
            }
            long long com = c[XX * YY][D] * c[XX * YY - D][L] % MOD;
            if ((bit0 + bit1 + bit2 + bit3) % 2 == 0)
            {
                ans += com;
                ans %= MOD;
            }
            else
            {
                ans -= com;
                ans += MOD;
                ans %= MOD;
            }
        }
        ans *= (R - X + 1) * (C - Y + 1);
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}
