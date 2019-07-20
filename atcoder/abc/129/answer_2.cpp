#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, suml = 0, ans = 100;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        sum += w[i];
    }
    for (int i = 0; i < n; i++)
    {
        suml += w[i];
        ans = min(abs(sum - 2 * suml), ans);
    }
    cout << ans << endl;
    return 0;
}
