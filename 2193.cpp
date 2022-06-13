#include <iostream>
#define N_MAX 100
int main() {
    int N; scanf("%d", &N);
    long long dp[N_MAX][2] = { { 0,0 },{ 0, 1 },{ 1,0 } };
    for (int idx = 2; idx <= N; idx++) {
        dp[idx][0] = dp[idx - 1][0] + dp[idx - 1][1];
        dp[idx][1] = dp[idx - 1][0];
    }
    printf("%lld", dp[N][0] + dp[N][1]);
    return 0;
}
