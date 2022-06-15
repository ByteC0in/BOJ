#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
vector<int> vtr;

void dfs() {
	if (vtr.size() == m) {	
		for (int i = 0; i < m; i++) {
			cout << vtr[i] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		if (vtr.size() < m && (vtr.size() == 0 || vtr[vtr.size() - 1] <= i)) {
			vtr.push_back(i);
			dfs();
			vtr.pop_back();
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m; 
	dfs();
    return 0;
}
