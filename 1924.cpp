#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;


int main() 
{
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    int z=0;
    vector<int> month = {0,31,28,31,30,31,30,31,31,30,31,30 };
    for (int a = 0; a < x; a++)
    {
        
            z = z + month[a];
        
    }
    z = z + y;
    int day = z % 7;
    
    if (day == 1)
    {
        std::cout << "MON";
    }
    if (day == 2)
    {
        std::cout << "TUE";
    }
    if (day == 3)
    {
        std::cout << "WED";
    }
    if (day == 4)
    {
        std::cout << "THU";
    } 
    if (day == 5)
    {
        std::cout << "FRI";
    }
    if (day == 6)
    {
        std::cout << "SAT";
    }
    if (day == 0)
    {
        std::cout << "SUN";
    }
    
      return 0;
}  
