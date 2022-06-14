#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool up = false;
    bool down = false;
    int x;
    int last;
    cin >> x;
    last = x;
    for (int i = 1; i < 8; i++)
    {
        cin >> x;
        if (last < x)
        {
            up = true;
        }
        if (last > x)
        {
            down = true;
        }
        last = x;
    }
    if (up == true && down == false)
    {
        cout << "ascending";
    }
    else if (up == false && down == true)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
    return 0;
}

