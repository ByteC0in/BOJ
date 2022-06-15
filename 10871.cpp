#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
 
 using namespace std;
  

int main() 
{
    int X;
    int N;
    int B;
    vector<int> A;
    std::cin >> N;
    std::cin >> X;
    for (int a = 0; a < N; a++)
    {
        std::cin >> B;
        A.push_back(B);
    }
    for (int a = 0; a < A.size(); a++)
    {
        if (X > A[a])
        {
            std::cout << A[a]<<" ";
        }
    }
      return 0;
}  
