#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1e+9 + 7;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> S(N);
    for (int i = 0; i < N; ++i)
        cin >> S[i];

    sort(S.begin(), S.end());
    // dp[i]: 黒板に書かれた文字が i のとき, N回の操作をN!通り行った場合の数の総和
    vector<long long> dp(1000001);
    for (int i = 0; i <= X; ++i)
        dp[i] = i;
    for (int i = 0; i < N; ++i)
    {
        for (int j = X; j > 0; --j)
        {
            dp[j] = (i * dp[j] + dp[j % S[i]]) % MOD;
            cout << "i = " << i << endl;
            cout << "j = " << j << endl;
            cout << "DP = " << dp[j] << endl;
        }
    }
    cout << dp[X] << endl;

    return 0;
}