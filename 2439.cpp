#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int i = x; i > 0; i--)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
        x--;
    }
     return 0;
}
