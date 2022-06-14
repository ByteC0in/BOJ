#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;
int main() 
{
    int C;
    int n;
    float sc;
    vector<float> answer;
    std::cin >> C;
    for (int a = 0; a < C; a++)
    {   vector<float> vec;   
    float s = 0;
    int av = 0;
        std::cin >> n;
        for (int b = 0; b < n; b++)
        {
            std::cin >> sc;
            vec.push_back(sc);
            av = av + sc;
        }
        av = av / vec.size();
        for (int b = 0; b < vec.size(); b++)
        {
            if (vec[b] > av)
            {
                s = s + 1;
            }
        }
        answer.push_back(s / vec.size() * 100);
    }
    for (int a = 0; a < answer.size(); a++)
    {
        answer[a] = answer[a] + 0.0005;
        answer[a] = (int)(answer[a] * 1000);
        answer[a] = answer[a] / 1000;

        printf("%.3f%%\n", answer[a]);
    }
      return 0;
}  
