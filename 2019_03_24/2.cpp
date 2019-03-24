#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int N = s.size();

    int record = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            string search = s.substr(i, j);
            for (int k = 0; k < search.size(); ++k)
            {
                if (search[k] == 'A' || search[k] == 'T' || search[k] == 'G' || search[k] == 'C')
                {
                    if (record <= k + 1)
                        record = k + 1;
                }
                else
                {
                    break;
                }
            }
        };
    }
    cout << record << endl;
}