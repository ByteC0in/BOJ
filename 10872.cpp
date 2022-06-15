#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
 
 using namespace std;

 
 int main()
 {
     int n;
     int facto = 1;
     std::cin >> n;
     for (int a = 1; a <= n; a++)
     {
         facto = facto * a;

     }
     std::cout << facto;
     return 0;
}  
