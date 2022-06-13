#include <stdio.h>
#include <algorithm>
#define fst first
#define snd second
using namespace std;

int n;
pair<int, int> f[100001];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		f[i].fst = a * 100 + b, f[i].snd = c * 100 + d;
	}

	sort(f, f + n);

	int date = 301, flag = 0, temp = 0, ans = 0, i = -1;
	while (date <= 1130 && i < n) {
		flag = 0, i++;
		for (int j = i; j < n; j++) {
			if (f[j].fst > date) break;
			if (temp < f[j].snd) temp = f[j].snd, flag = 1, i = j;
		}
		if (flag) date = temp, ans++;
		else {
			printf("0");
			return 0;
		}
	}

	printf("%d", ans);

	return 0;
}
