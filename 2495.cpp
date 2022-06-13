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
int answer = 0;
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for (int j = 0; j < 3; j++)
    {
        int x;
        int max = 1;
        int count = 1;
        cin >> x;
        string s = to_string(x);
        char compare = s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                if (s[i] == compare)count++;
            }
            else
            {
                if (max < count)
                {
                    max = count;
                }
                compare = s[i];
                count = 1;
            }
        }
        if (max < count)
        {
            max = count;
        }
        v.push_back(max);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << v[i]<<"\n";
    }
    return answer;
}
