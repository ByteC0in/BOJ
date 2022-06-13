#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int arr[1000] = { 0 };
    int n;
    int x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s;
        cin >> s;
        if (s <= 100)
        {
            if (arr[s] == 0)
            {
                arr[s]++;
            }
            else
            {
                x++;
            }
        }
        else
        {
            x++;
        }
    }
    cout << x;
    return 0;
}
