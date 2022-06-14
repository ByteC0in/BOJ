#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
 
 using namespace std;

 
 int main()
 {
     int T;
     std::cin >> T;
     vector<int> g;
     vector<int> l;
     for (int i = 0; i < T; i++)
     {
         long long A;
         std::cin >> A;
         long long B;
         std::cin >> B;
         long long r;
         long long a = A;
         long long b = B;
         while (b != 0)
         {

             r = a % b;
             a = b;
             b = r;
         }
         g.push_back(a);
         l.push_back((A / a)*(B / a)*a);

     }
     for (int i = 0; i < T; i++)
     {
         std::cout << l[i] << " " << g[i] << "\n";
     }
     return 0;
}  
