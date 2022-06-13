#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ctime>
#include <stack>
#include<queue>
#include <cstdio>
using namespace std;
int main()
{
    int h, m,t;
    cin >> h >> m >> t;
    m = m + t;
    bool check = true;
    while (check == true)
    {
        if (m >= 60)
        {
            m = m - 60;
            h++;
        }
        else
        {
            check = false;
        }
    }
    if (h >= 24)
    {
        h = h-24;
    }
    cout << h << " " << m;
    return 0;
}
