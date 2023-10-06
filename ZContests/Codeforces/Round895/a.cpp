#include <iostream>
#include <cmath>
using namespace std;

int minSteps(int a, int b, int c)
{
    if (a == b)
    {
        return 0;
    }
    int maxi = max(a, b);
    if (c >= maxi)
    {
        return 1;
    }
    int avg = (a + b) / 2;
    float diff = maxi - avg;
    return ceil(diff / c);
}

int main()
{

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << minSteps(a, b, c) << endl;
    }
    return 0;
}