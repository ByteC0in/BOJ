#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    vector<int> x;
    string s;
    cin >> a;
    s = to_string(a);
    for (int i = 0; i < s.size(); i++)
    {
        x.push_back(s[i] - '0');
    }
    sort(x.begin(), x.end(),greater<int>());
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i];
    }
    return 0;
}
