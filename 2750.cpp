#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int a;
    int N;
    int n = -1;
    vector<int> vec;
    std::cin >> N;
    for (int x = 0; x < N; x++)
    {
        std::cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for (int q = 0; q < vec.size(); q++)
    {
            std::cout << vec[q] << "\n";
    }
     return 0;
}
