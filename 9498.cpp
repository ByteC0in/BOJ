#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;
int main() 
{  
    int s;
    int a = 0;
    std::cin >> s;
    if (s >= 90 && s <= 100)
    {
        std::cout << "A";
        a = a + 1;
    }
    if (s >= 80 && s <= 89)
    {
        std::cout << "B";
        a = a + 1;
    }
    if (s >= 70 && s <= 79)
    {
        std::cout << "C";
        a = a + 1;
    }
    if (s >= 60 && s <= 69)
    {
        std::cout << "D";
        a = a + 1;
    }
    if (a == 0)
    {
        std::cout << "F";
    }

      return 0;
}
