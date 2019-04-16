#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define max(a, b) (a > b ? a : b)

int main()
{
    int N, K;
    string S;
    int i = 0;
    int j = 0;
    int answer = 0;
    vector<int> a;
    cin >> N >> K >> S;
    while (i < N)
    {
        while (i < N && S[i] == '1')
            i++;
        answer = max(answer, i - j);
        while (i < N && S[i] == '0')
            i++;
        K--;
        if (K < 0)
        {
            while (j < N && S[j] == '1')
                j++;
            while (j < N && S[j] == '0')
                j++;
        }
        answer = max(answer, i - j);
    }
    cout << answer << endl;
    return 0;
}