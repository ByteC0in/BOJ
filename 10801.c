#include <stdio.h>
#include <stdlib.h>

int arrA[10]={0,};
int arrB[10]={0,};
int main()
{
    int A=0;
    int B=0;
    for(int a=0;a<10;a++)
    {
        int s;
        scanf("%d",&s);
        arrA[a]=s;
    }
    for(int a=0;a<10;a++)
    {
        int s;
        scanf("%d",&s);
        arrB[a]=s;
    }
    for(int a=0;a<10;a++)
    {
        if(arrA[a]>arrB[a])
       {
           A++;
       }
       else if(arrA[a]<arrB[a])
       {
           B++;
       }
       else if(arrA[a]==arrB[a])
       {
           continue;
       }
    }
    if(A>B)
    {
        printf("A");
    }
    else if(A==B)
    {
        printf("D");
    }
    else
    {
        printf("B");
    }
    return 0;
}
