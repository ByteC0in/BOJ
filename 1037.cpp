#include <stdio.h>
#include <stdlib.h>
int main() {
	int cnt, i, j, result;
	int *num = (int *)malloc(sizeof(int) * 50);
	int *temp = (int *)malloc(sizeof(int) * 50);
	scanf("%d", &cnt);
	for(i = 0; i < cnt; i++) {
		scanf("%d", &num[i]);
    }
	if(cnt == 1)
	result = num[0]*num[0];
	else {
		for(i = 0; i < cnt; i++) {
			for(j = 0; j < cnt-1; j++) {
				if(num[j] < num[j+1]) {
					temp[j] = num[j];
					num[j] = num[j+1];
					num[j+1] = temp[j];
				}
			}
		}
		result = num[0] * num[cnt-1];
	}
	printf("%d\n", result);
	return 0;
}
