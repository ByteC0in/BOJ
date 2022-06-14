#include <iostream>
#include <vector>
using namespace std;
int gcd_recursion(int u, int v) {

    if (v == 0) {
        return u;
    }
    else {
        return gcd_recursion(v, u%v);
    }
}
int main()
{
    int t;
    cin >> t;
    vector<int> num;
    int f;
    cin >> f;
    for (int i = 0; i < t-1; i++)
    {
        int q;
        cin >> q;
        num.push_back(q);
    }
    for (int i = 0; i < num.size(); i++)
    {
        int temp = f;
        int gac = gcd_recursion(temp, num[i]);
        cout << temp/gac << "/" << num[i]/gac<<"\n";
    }
    return 0;
}
