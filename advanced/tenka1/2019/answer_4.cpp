#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int Maxn = 305, p = 998244353;
int n, a[Maxn];
long long sum[Maxn], dp[Maxn * Maxn], dp2[Maxn * Maxn];
long long fast_pow(long long x, long long y)
{
    long long ans = 1, now = x;
    while (y)
    {
        if (y & 1)
            ans = (ans * now) % p;
        now = (now * now) % p;
        y >>= 1;
    }
    return ans;
}
long long ans;
int main()
{
    //	freopen("D.in","r",stdin);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];
    dp[0] = fast_pow(2, n);
    dp2[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = sum[i]; j >= a[i]; j--)
            dp[j] = (dp[j] + 499122177 * dp[j - a[i]] % p) % p,
            dp2[j] = (dp2[j] + dp2[j - a[i]]) % p;
    if (!(sum[n] % 2))
        ans += dp[sum[n] / 2] - dp2[sum[n] / 2];
    for (int i = sum[n] / 2 + 1; i <= sum[n]; i++)
        ans = (ans + dp[i]) % p;
    ans *= 3;
    printf("%lld", ((fast_pow(3, n) - ans) % p + p) % p);
    cout << endl;
    return 0;
}