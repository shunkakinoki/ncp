#include <bits/stdc++.h>
using namespace std;

bool dfs_partial(int i, int sum, int n, int k, int a[])
{
    if (i == n)
        return sum == k;
    if (dfs(i + 1, sum))
        return true;
    if (dfs(i + 1, sum + a[i]))
        return true;
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i; i < n; i++)
    {
        cin >> a[i];
    }

    if (dfs_partial(0, 0, n, k, &a[n]))
        printf("Yes\n");
    else
        printf("No\n");
}