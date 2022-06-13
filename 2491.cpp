#include<cstdio>
 
int main() {
    int N, len=1, max=1; 
    scanf("%d", &N);
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < N; i++) {
        if (arr[i - 1] <= arr[i]) len++;
        else len = 1;
        if (len > max)
            max = len;
    }
    len = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i - 1] >= arr[i]) len++;
        else len = 1;
        if (len > max)
            max = len;
    }
    printf("%d\n", max);
}
