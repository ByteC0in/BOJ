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
     int b;
     int n;
    
     vector<int> A;
     vector<int> B;
     std::cin >> n;
     for (int i = 0; i < n; i++)
     {
         std::cin >> a;
         A.push_back(a);
         std::cin >> b;
         B.push_back(b);
     }
     for(int i=0;i<A.size();i++)
     {
         a = A[i];
         b = B[i];
         int c = 1;
         while (b != 0)
         {
             c = a % b;
             a = b;
             b = c;
         }
         int s = a;
         s = (A[i] * B[i]) / s;
         std::cout << s<< "\n";
       
     }
     return 0;
}  
