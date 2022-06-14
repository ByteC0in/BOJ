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
    vector<bool> x;
    while (true)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == 0 & b == 0 & c == 0)
        {
            break;
        }
        else
        {
            if (a*a + b * b == c * c)
            {
                x.push_back(true);
            }
            else if (a*a + c * c == b * b)
            {
                x.push_back(true);
            }
            else if (b*b + c * c == a * a)
            {
                x.push_back(true);
            }
            else
            {
                x.push_back(false);
            }
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == true)
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }
    return 0;
}
