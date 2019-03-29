#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    // 累積和
    vector<int> s(N + 1, 0);
    for (int i = 0; i < N; ++i)
    {
        if (i + 1 < N && str[i] == 'A' && str[i + 1] == 'C')
            s[i + 1] = s[i] + 1;
        else
            s[i + 1] = s[i];
    }

    // クエリ
    for (int q = 0; q < Q; ++q)
    {
        int l, r;
        cin >> l >> r;
        --l, --r; // 0-indexed にする
        cout << s[r] - s[l] << endl;
    }
}