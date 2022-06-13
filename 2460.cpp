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
    int max = 0;
    int left = 0;
    for (int i = 0; i < 10; i++)
    {
        int in;
        int out;
        cin >> out;
        cin >> in;
        left += in;
        left -= out;
        if (max < left)
        {
            max = left;
        }
    }
    cout << max;
    return 0;
}
