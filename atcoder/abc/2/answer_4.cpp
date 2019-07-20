#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> R(N, vector<bool>(N, false));
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        R[x][y] = true;
    }

    int ans = 0;
    for (int i = 0; i < (1 << N); i++)
    {
        int count = 0;
        bool isPossible = true;
        for (int x = 0; x < N; x++)
        {
            if ((i >> x) & 1)
            {
                count++;
                for (int y = x + 1; y < N; y++)
                {
                    if ((i >> y) & 1)
                    {
                        if (!R[x][y])
                        {
                            isPossible = false;
                        }
                    }
                }
            }
            if (!isPossible)
                break;
        }
        if (isPossible)
            ans = max(ans, count);
    }

    cout << ans << endl;
    return 0;
}
