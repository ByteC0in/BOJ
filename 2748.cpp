#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;

 
int main() 
{
    int a = 1;
    long long f = 0;
    long long g = 1;
    int n;
    long long fibo = 0;
    std::cin >> n;
    while(true)
    {
        if (a == n)
        {
            break;
        }
        fibo = fibo + f;
        f = f + g;
        a = a + 1;
        if (a == n)
        {
            break;
        }
        fibo = fibo + g;
        g = g + f;
        a = a + 1;
    }
    std::cout << fibo + 1;
      return 0;
}  
