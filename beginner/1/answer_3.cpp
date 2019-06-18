#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string Dir[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
                    "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};

    int winsp[] = {15, 93, 201, 327, 477, 645, 831, 1029, 1245, 1467, 1707, 1959};

    int Deg, Dis;
    cin >> Deg >> Dis;
    int i = 0;
    string ans = Dir[((Deg * 10 + 1125) / 2250) % 16];
    for (; i < 12; i++)
    {
        if (Dis < winsp[i])
            break;
    }
    if (!i)
        ans = "C";
    cout << ans << " " << i << endl;
    return 0;
}
