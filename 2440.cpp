#include <iostream>

using namespace std;

int main()
{
    vector<int> x;
    int n;
    cin >> n;
    for (int j = n; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
