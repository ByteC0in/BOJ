#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ctime>
#include <stack>
#include<queue>
using namespace std;

int main()
{
    vector<int> ans;
    int n;
    priority_queue<int, vector<int>, less<int>> pq;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        if (s != 0)
        {
            pq.push(s);
        }
        else
        {
            if (pq.empty())ans.push_back(0);
            else
            {
                ans.push_back(pq.top());
                pq.pop();
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
     return 0;
}
