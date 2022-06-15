#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
 
 using namespace std;

 
 int main()
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
     long long answer = (A / a)*(B / a)*a;
     std::cout << answer;
     return 0;
}  
