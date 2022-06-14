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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int s=0;
        int a = 1;
        string x;
        cin >> x;
        for (int q = 0; q < x.size(); q++)
        {
            if (x[q] == 'O')
            {
                s += a;
                a++;
            }
            else a = 1;
        }
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << "\n";
    }
     return 0;
}
