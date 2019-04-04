#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int M = 1e9 + 7;
long long dp[101][4][4][4];

int main()
{
    int N;
    cin >> N;

    dp[0][0][0][0] = 1;
    for (int len = 0; len < N; len++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    for (int x = 0; x < 4; x++)
                    {
                        if (x == 0 && j == 1 && k == 2)
                            continue;
                        if (x == 0 && i == 1 && k == 2)
                            continue;
                        if (x == 0 && i == 1 && j == 2)
                            continue;
                        if (x == 1 && i == 0 && j == 2)
                            continue;
                        if (x == 0 && i == 2 && j == 1)
                            continue;

                        dp[len + 1][x][i][j] =
                            (dp[len + 1][x][i][j] + dp[len][i][j][k]) % M;
                    }
                }
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                ans = (ans + dp[N][i][j][k]) % M;
            }
        }
    }

    cout << ans << endl;
}