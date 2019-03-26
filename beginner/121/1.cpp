#include <iostream>
using namespace std;

int main()
{
    int H, W;
    int h, w;
    cin >> H >> W;
    cin >> h >> w;

    int answer = 0;
    answer = H * W - h * w - h * (W - w) - w * (H - h);
    cout << answer << endl;
}