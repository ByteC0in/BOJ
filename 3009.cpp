#include <iostream>
#include <cmath>
#include <math.h>
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
    int ax, ay;
    vector<int> fx;
    vector<int> fy;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        fx.push_back(x);
        fy.push_back(y);
    }
    if (fx[0] == fx[1])
    {
        ax = fx[2];
    }
    else if (fx[0] == fx[2])
    {
        ax = fx[1];
    }
    else
    {
        ax = fx[0];
    }

    if (fy[0] == fy[1])
    {
        ay = fy[2];
    }
    else if (fy[0] == fy[2])
    {
        ay = fy[1];
    }
    else
    {
        ay = fy[0];
    }
    cout << ax <<" "<< ay;
    return 0;
}
