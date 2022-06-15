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
vector<int> fibo = { 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765 };
int main()
{
    int x;
    cin >> x;
    cout << fibo[x];
    return 0;
}
