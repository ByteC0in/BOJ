#include <iostream>
#include <string>
#include <math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            if (n > m)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}
