#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int answer = 0;
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        answer = 10000 + a * 1000;
    }
    else if (a == b)
    {
        answer = 1000 + a * 100; 
    }
    else if (a == c)
    {
        answer = 1000 + a * 100;
    }
    else if (b == c)
    {
        answer = 1000 + b * 100;
    }
    else
    {
        if (a > b&&a > c)
        {
            answer = a * 100;
        }
        else if (b > a&&b > c)
        {
            answer = b * 100;
        }
        else
        {
            answer = c * 100;
        }
    }
    cout << answer;
    return 0;
    
}
