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
    int n;
    cin >> n;
    int a = n * 2 - 1;
    int b = (n - 1) * 2 + 1;
    int blank = 0;
    bool check = false;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < blank; k++)
        {
            cout << " ";
        }
        for (int i = 0; i < a; i++)
        {
            cout << "*";
        }
        if (a == 1)
        {
            check = true;
        }
        if (check == false)
        {
            a = a - 2;
            blank++;
        }
        else
        {
            a = a + 2;
            blank--;
        }
        cout << "\n";
    }
    return 0;
}
 
