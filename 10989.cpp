#include <stdio.h>
int main()
{
	int n, i, j, k;
	int arry[10001] = { 0, };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		arry[k] = arry[k] + 1;
	}
	for (i = 1; i < 10001; i++)
	{
		if (arry[i] != 0)
		{
			for (j = 0; j < arry[i]; j++)
				printf("%d\n", i);
		}
	}
}
