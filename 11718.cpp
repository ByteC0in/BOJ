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
    vector<string> S;
    string s;
    while (getline(cin, s))
    {
        S.push_back(s);
    }
    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i]<<"\n";
    }

    return 0;
}
