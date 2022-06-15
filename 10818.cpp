#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long max = -1000000;
    long long min = 1000000;
    long long n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (max < x)max = x;
        if (min > x)min = x;
    }
    cout << min <<" " << max;
    return 0;
}
