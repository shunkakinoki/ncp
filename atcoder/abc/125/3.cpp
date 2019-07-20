#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int GCD(int x, int y)
{
    return x ? GCD(y % x, x) : y;
}

int main()
{
    int N;
    cin >> N;
    int tmp;
    int answer = 0;

    vector<int> A(N);
    vector<int> L(N * N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int k = 0;

    for (int i = N; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            L[k] = GCD(L[i], L[j]);
            k++;
        }
    }

    sort(L.begin(), L.end());

    

}