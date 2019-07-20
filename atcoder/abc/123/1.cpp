#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[5];
    int K;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cin >> K;

    int ans = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] - a[j] > K)
                ans = 0;
        }
    }

    if (ans == 1)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
}
