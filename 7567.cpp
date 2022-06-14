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
    int height = 10;
    string s;
    char semi;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        semi = s[i-1];
        if (semi == s[i])
        {
            height += 5;
        }
        else
        {
            height += 10;
        }
    }
    cout << height;
    return 0;
}
