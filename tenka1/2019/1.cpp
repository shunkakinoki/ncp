#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    int cnta = 0;
    int cntb = 0;

    cin >> N >> S;
    for (int i = N - 1; i > 0; i--)
    {
        if (S[i] == '.' && S[i - 1] == '#')
        {
            cnta++;
            S[i - 1] = '.';
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (S[i] == '.' && S[i - 1] == '#')
        {
            cntb++;
            S[i] = '#';
        }
    }

    cout << cnta << cntb;
    int cnt = min(cnta, cntb);

    cout << cnt << endl;
    return 0;
}