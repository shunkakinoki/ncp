#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N);
    for (int n = 0; n < N; n++)
    {
        cin >> A[n] >> B[n];
    }

    vector<pair<int, int>> AB(N);
    for (int n = 0; n < N; n++)
    {
        AB[n] = make_pair(A[n], B[n]);
    }
    sort(AB.begin(), AB.end());
    long long ans = 0;
    for (int n = 0; n < N; n++)
    {
        int buy = min(M, AB[n].second);
        ans += (long long)buy * AB[n].first;
        M -= buy;
    }

    cout << ans << endl;
}
