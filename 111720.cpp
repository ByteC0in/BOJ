#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <ctime>
#include <stack>
#include<queue>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char c[1000];
	for (int i = 0; i < n; ++i)
		cin >> c[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)(c[i] - 48);
	}
	cout << sum;
}
