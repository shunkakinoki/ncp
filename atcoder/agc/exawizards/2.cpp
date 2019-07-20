#include <iostream>
#include <string>
using namespace std;

int main()
{

    int N;
    string s;
    cin >> N >> s;

    int red_total = 0;
    int blue_total = 0;

    for (int n = 0; n < N; n++)
    {
        if (s[n] == 'R')
        {
            red_total++;
        }
        else
        {
            blue_total++;
        }
    }
    if (red_total > blue_total){
        cout << 'Y' << 'e' << 's' << endl;
    }
    else
    {
        cout << 'N' << 'o' << endl;
    }
}