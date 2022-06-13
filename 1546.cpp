#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;
 bool compare(double a, double b)
  {
     if (a <= b)
     {
         return false;
     }
     return true;
  }

int main() 
{
    int s;
    int high = 0;
    vector<double> qwe;
    std::cin >> s;
    for (int a = 0; a < s; a++)
    {
        int score;
        std::cin >> score;
        qwe.push_back(score);
    }
    sort(qwe.begin(), qwe.end(), compare);
    high = qwe[0];
    for (int a = 0; a < qwe.size(); a++)
    {
        qwe[a] = ((double)qwe[a] / high) * (double)100.0;
    }
    double aver = 0;
    for (int a = 0; a < qwe.size(); a++)
    {
        aver = aver + (double)qwe[a];
    }
    aver = aver / (double)qwe.size();
    std::cout << aver;
      return 0;
}  
   
