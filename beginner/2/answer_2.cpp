#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string W;
    cin >> W;
    for (int i = 0; i < W.size(); i++)
    {
        char w = W.at(i);
        if (w == 'a' || w == 'i' || w == 'u' || w == 'e' || w == 'o')
        {
            continue;
        }
        else
        {
            cout << w;
        }
    }
    cout << endl;
}
