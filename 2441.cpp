#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;
int main()
{
    int a;
    int b = 0;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int o = 0; o < b; o++)
        {
            std::cout << " ";
        }
        for (int o = 0; o < a - b; o++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
        b = b + 1;
    }
    return 0;
}
