#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int tmp;
    vector<int> a;
    vector<int> b;
    a.push_back(0);
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = i; j < N + 1; j++)
        {
            b.push_back(a[i] + a[j]);
        }
    }
    sort(b.begin(), b.end());
    int res = 0;
    for (int i = 0; i < b.size(); i++)
    {
        int ind = upper_bound(b.begin(), b.end(), M - b[i]) - b.begin();
        cout << ind << endl;

        ind--;
        if (ind < 0)
            continue;
        res = max(res, b[i] + b[ind]);
    }
    cout << res << endl;
}