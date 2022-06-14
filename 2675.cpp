#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ctime>
#include <stack>
#include<queue>
#include <cstdio>
using namespace std;
int main()
{
    vector<string> x;
    
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    { 
        string s;
        int r;
        cin >> r >> s;
        string answer = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < r; j++)
            {
                answer += s[i];
            }
        }
        x.push_back(answer);
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "\n";
    }
    return 0;
}
