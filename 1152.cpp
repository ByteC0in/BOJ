#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 1;
    if (s.size() == 0)
    {
        count = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i != 0 && i != s.size() - 1)
        {
            if (s[i] == ' ')
                count++;
        }
        else
        {
            if (s[i] == ' '&&s.size() == 1)
            {
                count = 0;
            }
        }
    }
    cout << count;
    return 0;
}
