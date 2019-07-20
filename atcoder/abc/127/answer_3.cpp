#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    int lm = 1, rm = n;
    for (int i = 0; i < m; i++)
    {
        cin >> l[i] >> r[i];
        lm = max(lm, l[i]);
        rm = min(rm, r[i]);
    }
    cout << max(rm - lm + 1, 0) << endl;
}
