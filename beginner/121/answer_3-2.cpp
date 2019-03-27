#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Shop
{
  public:
    int Money;
    int Stock;
    Shop(int m, int s)
    {
        Money = m;
        Stock = s;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N);
    for (int n = 0; n < N; n++)
    {
        cin >> A[n] >> B[n];
    }

    vector<Shop> ShopList;
    for (int n = 0; n < N; n++)
    {
        ShopList[n] = Shop(A[n], B[n]);
    }
    sort(ShopList.begin(), ShopList.end());
    long long ans = 0;
    for (int n = 0; n < N; n++)
    {
        int buy = min(M, ShopList[n].Stock);
        ans += (long long)buy * ShopList[n].Money;
        M -= buy;
    }

    cout << ans << endl;
}
