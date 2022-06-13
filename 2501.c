#include <stdio.h>
#include <stdlib.h>
int answer[100000]={0,};
int main()
{
    int n;
    int k;
    int i=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int a=1;a<=n;a++)
    {
        if(n%a==0)
        {
            answer[i]=a;
            i+=1;
        }
    }
    if(i!=0)
    {
    printf("%d",answer[k-1]);
    }
    else
    {
        printf("0");
    }
    return 0;
}
