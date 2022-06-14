#include <iostream>

using namespace std;

int main() 
{
	int T = 0; // testcase의 개수
	int n = 0; // 정수 n
	int sol[16] = { 0 }; // 방법의 수를 저장하는 배열
	int k = 0; // result의 idx
	sol[0] = 1;
	cin >> T;
	int *result = new int[T];
	while (k != T)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i - 1 >= 0)
			{
				sol[i] += sol[i - 1];
			}
			if (i - 2 >= 0)
			{
				sol[i] += sol[i - 2];
			}
			if (i - 3 >= 0)
			{
				sol[i] += sol[i - 3];
			}
		}
		result[k] = sol[n];
		k++;
		for (int i = 1; i <= n; i++)
		{
			sol[i] = 0;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << result[i] << endl;
	}
    return 0;
}
