#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string T = "ATCG";

    int ans = 0;
    int now = 0;
    for (int i = 0; i < S.size(); i++)
    {
        bool isATCG = false;
        for (int j = 0; j < T.size(); j++)
        {
            if (S[i] == T[i])
                isATCG = true;
        }

        if (!isATCG)
        {
            now = 0;
        }
        else
        {
            now++;
            ans = max(now, ans);
        }
    }

    cout << ans << endl;
}