#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

#define cinf(n, x)                \
    for (int i = 0; i < (n); i++) \
        cin >> x[i];

using namespace std;

int main()
{
    string S;
    int N, K;
    cin >> N >> K;
    cin >> S;
    for (int i = 0; i < N; i++)
    {
        char w = S.at(i);
        if (i + 1 == K)
        {
            char s = tolower(w);
            cout << s;
        }
        else
        {
            cout << w;
        }
    }
    cout << endl;
}
