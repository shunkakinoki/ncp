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
    int N;
    cin >> N;
    printf("%02d:%02d:%02d\n", N / 3600, N % 3600 / 60, N % 3600 % 60);
}
