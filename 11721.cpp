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
    int m = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char x = s[i];
        cout << x;
        m++;
        if (m == 10)
        {
            cout << "\n";
            m = 0;
        }
    }
    return 0;
}
