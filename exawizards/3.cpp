#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main()
{

    int N;
    int Q;
    string s;

    cin >> N >> Q >> s;

    int td[Q - 1][2];

    char tstr;
    char dstr;

    int mass[N - 1][2];
    int total = N;

    for (int q = 0; q < Q; q++)
    {
        cin >> tstr >> dstr;
        td[q][0] = (int)tstr;
        if (dstr == 'L')
        {
            td[q][1] = 0;
        }
        else if (dstr == 'R')
        {
            td[q][1] = 1;
        }

        for (int n = 0; n < N; n++)
        {
            mass[n][0] = (int)s[n];
            if (q == 0)
            {
                mass[n][1] = 1;
            }

            if (td[q][0] == mass[n][0])
            {
                if (td[q][1] == 0)
                {
                    if (n == 0)
                    {
                        total -= mass[n][1];
                        mass[n][1] = 0;
                    }
                    else
                    {
                        mass[n - 1][1] += mass[n][1];
                        mass[n][1] = 0;
                    }
                }
                else if (td[q][1] == 1)
                {
                    if (n == N - 1)
                    {
                        total -= mass[n][1];
                        mass[n][1] = 0;
                    }
                    else
                    {
                        mass[n + 1][1] += mass[n][1];
                        mass[n][1] = 0;
                    }
                }
            }
        }
    }

    cout << total << endl;
}