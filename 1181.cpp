#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
 
 using namespace std;

 bool cl(string a, string b)
 {
     bool answer = false;
     if (a.size() < b.size())
     {
         answer = true;
     }
     else if (a.size() == b.size())
     {
         answer = a < b;
     }
     return answer;
 }


 int main()
 {
 
     int n;
     std::cin >> n;
     vector<string> s;
     set<string> s2;
     string s1;
     for (int a = 0; a < n;a++)
     {
         std::cin >> s1;
         s.push_back(s1);
     }

     sort(s.begin(),s.end(), cl);
     for (int a = 0; a < s.size(); a++)
     {
         s2.insert(s[a]);

     }

     for (auto a : s)
     {
         if (s2.count(a))
         {
             std::cout << a << "\n";
             s2.erase(a);
         }
     }



     return 0;
}  
