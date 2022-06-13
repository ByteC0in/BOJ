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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    c += d;
    bool check = true;
    while (check)
    {
        check = false;
        if (c >= 60)
        {
            b++;
            c = c - 60;
            check = true;
        }
        if (b >= 60)
        {
            a++;
            b = b - 60;
            check = true;
        }   
        if (a >= 24)
        {
            a = a - 24;
        }
    }

    cout << a << " " << b<<" " << c;
   
    return 0;
}
