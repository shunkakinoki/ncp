#include <iostream>
using namespace std;

int N, Q;
char t[200010], d[200010];
string S;

bool ok(int id)
{
    int now = id;
    for (int i = 1; i <= Q; i++)
    {
        if (S[now] == t[i])
        {
            if (d[i] == 'L')
                now--;
            else
                now++;
        }
        if (now == -1 || now == N)
            return true;
    }
    return false;
}

int main()
{
    cin >> N >> Q >> S;
    for (int i = 1; i <= Q; i++)
    {
        cin >> t[i] >> d[i];
    }
    int l1 = -1, r1 = N;
    while (l1 + 1 < r1)
    {
        int m = (l1 + r1) / 2;
        if (ok(m))
            l1 = m;
        else
            r1 = m;
    }
    int l2 = -1, r2 = N;
    while (l2 + 1 < r2)
    {
        int m = (l2 + r2) / 2;
        if (ok(m))
            r2 = m;
        else
            l2 = m;
    }
    if (l1 >= r2)
        cout << 0 << endl;
    else
        cout << N - (l1 + 1) - (N - r2) << endl;
}