#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> answer;
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)break;
        else
        {
            answer.push_back(a + b);
        }
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "\n";
    }
    return 0;
}
