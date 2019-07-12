#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int len = a[i] + a[j] + a[k];
                int ma = max(a[i], max(a[j], a[k]));
                int rest = len - ma;

                if (ma < rest)
                {
                    ans = max(ans, len);
                }
            }
        }
    }

    printf("%d\n", ans);
}
