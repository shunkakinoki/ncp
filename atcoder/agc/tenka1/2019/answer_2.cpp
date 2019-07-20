#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    string S;
    cin >> N >> S >> K;

    char s = S[K-1];

    for (int n = 0; n < N; n++)
    {
        if (S[n] == s)
            cout << S[n];
        else
        {
            cout << '*';
        }
    }

    cout << endl;

    return 0;
}