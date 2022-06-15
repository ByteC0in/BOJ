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
    vector<vector<int>> x;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back({a, b, a + b});
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << "Case #" << i + 1 << ": " << x[i][0] << " + " << x[i][1] << " = " << x[i][2] << "\n";
    }
     return 0;
}
