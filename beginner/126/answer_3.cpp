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
    float N, K;
    cin >> N >> K;
    float A[(int)N];
    float B[(int)N];
    for (int i = 0; i < N; i++)
        A[i] = i + 1;
    float tmp, times;
    for (int i = 0; i < N; i++)
    {
        tmp = i + 1;
        times = 0;
        while (tmp < K)
        {
            tmp *= 2;
            times += 1;
        }
        B[i] = times;
    }
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += ((float)1 / (N)) * (pow((float)0.5, B[i]));
    }
    cout << sum << endl;
    return 0;
}
