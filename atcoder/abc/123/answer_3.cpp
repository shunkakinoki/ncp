#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    // Your code here!
    long long N, A, B, C, D, E;
    cin >> N >> A >> B >> C >> D >> E;
    long long MinTime = min({A, B, C, D, E});
    long long ans = (N + MinTime - 1) / MinTime + 4;
    cout << ans << endl;
}