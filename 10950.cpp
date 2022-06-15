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
    vector<int> x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a + b);
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i]<<"\n";
    }
     return 0;
}
