#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == 'A')
        cout << 'T' << endl;
    if (s[0] == 'C')
        cout << 'G' << endl;
    if (s[0] == 'G')
        cout << 'C' << endl;
    if (s[0] == 'T')
        cout << 'A' << endl;
}