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
    int x[1000] = { 0,1};
    int n;
    cin >> n;
    for (int i = 2; i <= n+1; i++)
    {
        x[i] = (x[i - 1] + x[i - 2])%10007;
    }
    cout << x[n+1];
    return 0;
}
