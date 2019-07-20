#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define ll long long
int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> vec;
    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        ll a;
        cin >> a;
        vec.push_back(make_pair(a, 1));
    }

    for (int i = 0; i < M; i++)
    {
        ll b, c;
        cin >> b >> c;
        vec.push_back(make_pair(c, b));
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    ll k = 0;
    while (N > 0)
    {
        if (vec[k].second > N)
        {
            sum += N * vec[k].first;
            break;
        }
        sum += vec[k].second * vec[k].first;
        N -= vec[k].second;
        k++;
    }
    cout << sum;
    return 0;
}
