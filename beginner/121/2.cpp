#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, C;

    cin >> N >> M >> C;

    int B[M];
    for (int m = 0; m < M; m++)
    {
        cin >> B[m];
    }

    int A[N][M];

    for (int n = 0; n < N; n++)
    {
        for (int m = 0; m < M; m++)
        {
            cin >> A[n][m];
        }
    }

    int answer = 0;
    for (int n = 0; n < N; n++)
    {
        int tmp = 0;
        for (int m = 0; m < M; m++)
        {
            tmp += A[n][m] * B[m];
        }
        if (tmp + C > 0)
            ++answer;
    }

    cout << answer << endl;
}
