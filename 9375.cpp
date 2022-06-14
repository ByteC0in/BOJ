#include <iostream>
#include <vector>
#include <string>
using namespace std;


int solution(vector<vector<string>> clothes) {
    int a[31] = { 0, };
int v[31];
    int answer = 0;
    int s;
    int r = 1;
    s = clothes.size();
    for (int i = 0; i<31; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i<s; i++)
    {
        if (v[i] == 1)
            continue;
        for (int j = i; j<s; j++)
        {
            if (clothes[i][1] == clothes[j][1])
            {
                a[i]++;
                v[j] = 1;
            }
        }
    }
    for (int i = 0; i< 31; i++)
    {
        if (a[i]>0)
        {
            r *= (a[i] + 1);
        }
    }
    answer = r - 1;
    return answer;
}
int main()
{
    vector<int> sio;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<vector<string>> x;
        int n;
        cin >> n;
        for (int z = 0; z < n; z++)
        {
            string s, v;
            cin >> s >> v;
            x.push_back({ s,v });
        }
        int ans = solution(x);
        sio.push_back(ans);
    }
    for (int i = 0; i < sio.size(); i++)
    {
        cout << sio[i] << "\n";
    }
    return 0;
}
