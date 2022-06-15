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
    int A;
    int B;
    vector<int> AB;
    vector<int> BA;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> A;
        AB.push_back(A);
        std::cin >> B;
        BA.push_back(B);
    }
    for (int a = 0; a < AB.size(); a++)
    {
        std::cout << "Case #" << a + 1 << ": " << AB[a] + BA[a]<<"\n";
    }
    return 0;
}
