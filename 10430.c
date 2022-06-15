#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int n;
    int i;
    scanf("%d%d%d",&s,&n,&i);
    printf("%d\n",(s+n)%i);
    printf("%d\n",(s%i+n%i)%i);
    printf("%d\n",(s*n)%i);
    printf("%d\n",(s%i*n%i)%i);
    return 0;
}
