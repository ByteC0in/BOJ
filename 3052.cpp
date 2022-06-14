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
    vector<int> x;
    for (int i = 0; i < 10; i++)
    {
        int s;
        cin >> s;
        x.push_back(s%42);
    }
    sort(x.begin(), x.end());
    x.erase(unique(x.begin(), x.end()), x.end());
    cout << x.size();
     return 0;
}
