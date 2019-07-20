#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int c = 0;
    int N = S.size();
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            if (S.at(i) == '0')
                c++;
        }
        else
        {
            if (S.at(i) == '1')
                c++;
        }
    }

    int ans = min(c, N - c);
    cout << ans << endl;

    return 0;
}