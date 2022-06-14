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
    int a, b, c;
    string s;
    cin >> a >> b >> c>>s;
    vector<int>x = { a,b,c };
    sort(x.begin(), x.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            cout << x[0] << " ";
        }
        else if (s[i] == 'B')
        {
            cout << x[1] << " ";
        }
        else
        {
            cout << x[2] << " ";
        }
    }

    return 0;
}
