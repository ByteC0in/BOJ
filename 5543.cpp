#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <ctime>
#include <functional>
using namespace std;
int main()
{
    int a, b, c, d, e;
    int answer = 0;
    cin >> a >> b >> c >> d >> e;
    vector<int> x;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    int minx = 9999;
    for (int i = 0; i < 3; i++)
    {
        if (x[i] < minx)
        {
            minx = x[i];
        }
    }
    if (d < e)
    {
        cout << minx + d - 50;
    }
    else
    {
        cout << minx + e - 50;
    }
    return 0;
}
