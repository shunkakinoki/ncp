#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    sort(A.begin(), A.end());

    for (int i = A[1]; i > 0; i--)
    {
        int flag = 0;
        for (int k = 0; k < N; k++)
        {
            if (A[k] % i)
                flag++;
            if (flag == 2)
                break;
        }
        if (flag < 2)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}