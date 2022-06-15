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
int s = 0;
vector<vector<int>> answer;
void hanoi_tower(int n, int from, int temp, int to)
{
    s++;
    if (n == 1) answer.push_back({ from,to });
    else
    {
        hanoi_tower(n - 1, from, to, temp);
        answer.push_back({ from,to });
        hanoi_tower(n - 1, temp, from, to);
    }
}
vector<vector<int>> solution(int n) {

    hanoi_tower(n, 1, 2, 3);
    return answer;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> x = solution(n);
    cout << s<<"\n";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i][0] << " " << answer[i][1] << "\n";
    }
    return 0;
}
