#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5000]={0,};
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int s;
        scanf("%d",&s);
        arr[a]=s;
    }
    for(int a=0;a<n;a++)
    {
        for(int b=a;b<n;b++)
        {
            if(arr[a]>arr[b])
            {
                int temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    if(arr[0]!=1)printf("1");
    else
    {
        int sum=1;
        for(int a=1;a<n;a++)
        {
            if(arr[a]>sum+1)
            {
                break;
            }
            sum=sum+arr[a];
        }
        printf("%d",sum+1);
    }
    return 0;
}
