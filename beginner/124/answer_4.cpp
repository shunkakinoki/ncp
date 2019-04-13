#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z, k, i, j;
    cin >> x >> y >> z >> k;
    vector<long long> a(x);
    vector<long long> b(y);
    vector<long long> c(z);
    for (i = 0; i < x; ++i)
    {
        cin >> a.at(i);
    }
    for (i = 0; i < y; ++i)
    {
        cin >> b.at(i);
    }
    for (i = 0; i < z; ++i)
    {
        cin >> c.at(i);
    }
    vector<long long> ab;
    for (i = 0; i < x; ++i)
    {
        for (j = 0; j < y; ++j)
        {
            ab.push_back(a.at(i) + b.at(j));
        }
    }
    sort(ab.begin(), ab.end(), greater<long long>());
    vector<long long> abc;
    for (i = 0; i < min(k, x * y); ++i)
    {
        for (j = 0; j < z; ++j)
        {
            abc.push_back(ab.at(i) + c.at(j));
        }
    }
    sort(abc.begin(), abc.end(), greater<long long>());
    for (i = 0; i < k; ++i)
    {
        cout << abc.at(i) << endl;
    }
    return 0;
}