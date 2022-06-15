#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <ctime>
#include <functional>
using namespace std;
int main()
{
    int x, y;
    int answer=0;
    cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            answer = 1;
        }
        else
        {
            answer = 4;
        }
    }
    else
    {
        if (y > 0)
        {
            answer = 2;
        }
        else
        {
            answer = 3;
        }
    }
    cout << answer;
    return 0;
}
