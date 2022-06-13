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
    int money = 0;
    vector<vector<int>> dice;
    for (int i = 0; i < 3; i++)
    {
        int a, b, c,d;
        cin >> a >> b >> c>>d;
        dice.push_back({ a,b,c,d });
    }
    for (int i = 0; i < dice.size(); i++)
    {
        int amount=0;
        for (int j = 0; j < dice[i].size(); j++)
        {
            if (dice[i][j] == 1)
            {
                amount++;
            }
        }
        if (amount == 0)
        {
            cout << "D\n";
        }
        if (amount == 1)
        {
            cout << "C\n";
        }
        if (amount == 2)
        {
            cout << "B\n";
        }
        if (amount == 3)
        {
            cout << "A\n";
        }
        if (amount == 4)
        {
            cout << "E\n";
        }
    }
   
    return 0;
}
