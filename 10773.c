#include <stdio.h>
#include <stdlib.h>


int arr[100000]={0,};
int size;
void pop(int arr[])
{
    size=size-1;
    arr[size]=0;
}

int main()
{
    int n;
    int answer=0;
    size=0;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int s;
        scanf("%d",&s);
        if(s==0)
        {
            pop(arr);
        }
        else
        {
            arr[size]=s;
            size++;
        }
    }
    for(int a=0;a<size;a++)
    {
        answer=answer+arr[a];

    }
    printf("%d",answer);
    return 0;
}
