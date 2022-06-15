#include <iostream>
 
using namespace std;
 
#define MAX 8 + 1
 
void dfs(int _n, int _m, int _lists[], bool _check[], int node, int cnt) {
    if (cnt == _m) {
 
        for (int i = 0; i < _m; i++) {
            cout << _lists[i] << " ";
        }
        cout << "\n";
        return;
    }
 
    for (int i = node; i <= _n; i++) {
        if (!_check[i]) {
            _check[i] = true;
            _lists[cnt] = i;
            dfs(_n, _m, _lists, _check, i + 1, cnt + 1);
            _check[i] = false;
        }
    }
}
 
int main() {
    cin.tie(0);
 
    int n, m;
    int lists[MAX] = { 0, };
    bool check[MAX] = { 0, };
 
    cin >> n >> m;
 
    dfs(n, m, lists, check, 1, 0);
 
    return 0;
}
