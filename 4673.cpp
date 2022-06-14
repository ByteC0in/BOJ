#include <string>
#include <vector>
#include <iostream>
using namespace std;
int solution(int s)
{
    vector<int> qwe;
    int x = 10;
    qwe.push_back(s % x);
    string n = to_string(s);
    int store = 2;
    for (int a = 0; a < n.size() - 1; a++)
    {
        qwe.push_back(s % (x * 10) / x);
        x = x * 10;
    }
    for (int i = 0; i < qwe.size(); i++)
    {
        s += qwe[i];
    }
    return s;
}

int main()
{
    vector<int> value;
    for (int i = 0; i <= 10000; i++)
    {
        value.push_back(i);
    }

    int a = 0;
    for (int i = 1; i <= 9999; i++)
    {
        if (value[i] == 0) continue;
        a = i;
        while (a < 10000)
        {
            a = solution(a);
            if (a < 10000)
                value[a] = 0;   
        }
        if (value[i] != 0)
        std::cout << value[i]<<"\n";
    }

    

    return 0;
}
