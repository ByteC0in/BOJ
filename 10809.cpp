#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int i = 97;
    string s;
    std::cin >> s;
    int f = 0;
    vector<int> sol;
    for (int i = 'a'; i <= 122; i++)
    {
        for (int a = 0; a < s.size(); a++)
        {
            int f = s.find(i);
            sol.push_back (f);
            f = 0;
            break;
        }
        
    }
    for (int a = 0; a < sol.size(); a++)
    {
        std::cout << sol[a]<<" ";
    }
    std::cin >> s;
    return 0;
}      
