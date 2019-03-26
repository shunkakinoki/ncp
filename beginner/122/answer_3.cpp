#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    string S;

    cin >> N >> Q;
    cin >> S;

    vector<int> l(Q), r(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> l[i] >> r[i];
    };

    vector<int> sum(N + 1, 0);

    for (int i = 1; i < N; i++)
    {
        if (S[i - 1] == 'A' && S[i] == 'C')
        {
            sum[i + 1] = sum[i] + 1;
        }
        else
        {
            sum[i + 1] = sum[i];
        }
    }

    for (int i = 0; i < Q; i++)
    {
        int ans = sum[r[i]] - sum[l[i]];
        cout << ans << endl;
    }
}