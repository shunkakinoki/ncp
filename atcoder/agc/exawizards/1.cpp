#include <iostream>
#include <string>
using namespace std;

int main()
{

    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C){
        cout << 'Y' << 'e' << 's' << endl;
    }
    else
    {
        cout << 'N' << 'o' << endl;
    }
}