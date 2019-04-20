#include <iostream>
using namespace std;

int main()
{
    string S, SA, SB, SC;
    int long N;
    int cnt;
    int cnta = 0;
    cin >> N >> S;

    SA = S;
    SB = S;
    SC = S;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '#' && S[i + 1] == '.')
        {
            cnta++;
            S[i + 1] = '#';
        }
    }
    cnt = cnta;
    cnta = 0;
    for (int i = 0; i < N; i++)
    {
        if (SA[i] == '#' && SA[i + 1] == '.')
        {
            cnta++;
            SA[i] = '.';
        }
    }
    cnt = min(cnt, cnta);
    cnta = 0;
    for (int i = N - 1; i > 0; i--)
    {
        if (SB[i - 1] == '#' && SB[i] == '.')
        {
            cnta++;
            SB[i - 1] = '.';
        }
    }
    cnt = min(cnt, cnta);
    cnta = 0;
    for (int i = N - 1; i > 0; i--)
    {
        if (SC[i - 1] == '#' && SC[i] == '.')
        {
            cnta++;
            SC[i] = '#';
        }
    }
    cnt = min(cnt, cnta);

    cout << cnt << endl;

    return 0;
}