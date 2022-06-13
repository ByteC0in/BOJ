#include <stdio.h>
#include <stdlib.h>
int arr[5]={0,};
int main()
{
    int all=0;
    for(int a=0;a<5;a++)
    {
        int s;
        scanf("%d",&s);
        arr[a]=s;
    }
    for(int a=0;a<5;a++)
    {
        all=all+(arr[a]*arr[a]);
    }
    printf("%d",all%10);
    return 0;
}
