#include <iostream>
using namespace std;

int countSubstrs(string s1, string s2)
{
    int ans = 0;

    for (int i = 0; i < s1.length(); i++)
    {

        // s3 stores all substrings of s1
        string s3;
        for (int j = i; j < s1.length(); j++)
        {
            s3 += s1[j];

            // check the presence of s3 in s2
            if (s2.find(s3) != string::npos)
                ans++;
        }
    }
    return ans;
}
int main()
{
    int N, Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    int l[Q], r[Q];
    for (int i = 0; i < Q; ++i)
    {
        cin >> l[i] >> r[i];
    }

    string ac = "AC";

    for (int j = 0; j < Q; ++j)
    {
        int record = 0;
        for (int k = l[j]; k <= r[j]; ++k)
        {
            for (int m = l[j] + 1; m < N; ++m)
            {
                string search = s.substr(k-1, m);
                int tmp = countSubstrs(ac, search);
                if (record < tmp)
                    record = tmp;
            }
        }
        cout << record << endl;
    }
}