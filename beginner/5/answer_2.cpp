#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int T[100];
    int record;
    cin >> N;
    for (int i = 0; i < N; i++)
    {

        cin >> T[i];
        if (i == 0)
            record = T[i];
        if (record > T[i])
            record = T[i];
    }
    cout << record << endl;
}
