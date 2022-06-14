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
    int n;
    cin >> n;
    vector<bool> x;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int cnt = 0;
        bool check = true;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '(')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            if (cnt < 0)
            {
                check = false;
                break;
            }
        }
        if (cnt != 0)
        {
            check = false;
        }
        x.push_back(check);
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
