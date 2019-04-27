#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int answer = 0;

    vector<int> V(N);
    vector<int> C(N);
    vector<int> D(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> V[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> C[i];
    }

    for (int i = 0; i < N; ++i)
    {
        D[i] = V[i] - C[i];
    }

    sort(D.begin(), D.end());

    int key = lower_bound(D.begin(), D.end(), 0) - D.begin();

    for (int i = key; i < N; ++i)
    {
        answer += D[i];
    }
    cout << answer << endl;
}