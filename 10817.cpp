#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;
  

int main() 
{
    int A;
    int B;
    int C;
    vector<int> s;
    
    std::cin >> A;
    std::cin >> B;
    std::cin >> C; 
       s.push_back (A);
    s.push_back(B);
    s.push_back(C);
    sort(s.begin(),s.end());
         int medium=s[1];
    std::cout << medium;
    return 0;
}  
