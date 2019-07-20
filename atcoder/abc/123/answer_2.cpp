#include <iostream>
using namespace std;

int a[5];
int s, ans;

int main()
{
    s = 0;
    ans = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if ((a[s] - 1) % 10 > (a[i] - 1) % 10)
        {
            s = i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == s)
        {
            ans += a[i];
        }
        else
        {
            ans += (((a[i] - 1) / 10) + 1) * 10;
        }
    }

    cout << ans << endl;

    return 0;
}