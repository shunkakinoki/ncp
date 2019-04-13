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

    cin >> N >> K >> S;
    int SS[N], R[N];

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            SS[i] = 0;
        }
        else if (S[i] == '1')
        {
            SS[i] = 1;
        }
    }

    int counter = 1;
    int record = 0;
    int record_num = 0;

    for (int i = 0; i < N; i++)
    {
        if (SS[i] == SS[i + 1])
        {
            counter++;
            if (counter > record)
            {
                record = counter;
                record_num = i;
            }
        }
        else
        {
            counter = 0;
        }
        R[i] = counter;
    }

    for (int i = 0; i < K; i++)
    {
        
    }

    if (N == 1 && K && 1)
        cout << 1 << endl;

    return 0;
}