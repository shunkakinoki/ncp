#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int dp[101][4][4][4];

int main()
{
    int N;
    cin >> N;

    dp[0][3][3][3] = 1;

    for (int len = 0; len < N; len++)
    {
        for (int c1 = 0; c1 < 4; c1++)
        {
            for (int c2 = 0; c2 < 4; c2++)
            {
                for (int c3 = 0; c3 < 4; c3++)
                {
                    if (dp[len][c1][c2][c3] == 0)
                        continue;
                    for (int a = 0; a < 4; a++)
                    {
                        if (a == 2 && c1 == 1 && c2 == 0)
                            continue;
                        if (a == 2 && c1 == 1 && c2 == 0)
                            continue;
                        if (a == 2 && c1 == 1 && c2 == 0)
                            continue;
                        if (a == 2 && c1 == 1 && c2 == 0)
                            continue;
                        if (a == 2 && c1 == 1 && c2 == 0)
                            continue;
                    }
                }
            }
        }
    }
}
