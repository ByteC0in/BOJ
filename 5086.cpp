#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)break;
        else if (b%a == 0)ans.push_back(0);
        else if (a%b == 0)ans.push_back(1);
        else ans.push_back(2);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 0)cout << "factor\n";
        else if (ans[i] == 1)cout << "multiple\n";
        else cout << "neither\n";
    }
    return 0;
}
