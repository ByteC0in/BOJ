#include <stdio.h>
#include <stdlib.h>
int arr[100]={0,};
int arr2[100]={0,};
int main()
{
    int w=0;
    int As=0;
    int Bs=0;
    char win;
    for(int a=0;a<10;a++)
    {
        int s;
        scanf("%d",&s);
        arr[a]=s;
    }
        for(int a=0;a<10;a++)
    {
        int s;
        scanf("%d",&s);
        arr2[a]=s;
    }
    for(int a=0;a<10;a++)
    {
        if(arr[a]==arr2[a])
        {
            As+=1;
            Bs+=1;
        }
        else if(arr[a]>arr2[a])
        {
            As+=3;
            w=1;
        }
        else if(arr[a]<arr2[a])
        {
            Bs+=3;
            w=2;
        }

    }
         if(As==Bs)
         {
            if(w==0)
            {
                printf("%d %d\nD",As,Bs);
            }
            else if(w==1)
            {
                printf("%d %d\nA",As,Bs);
            }
            else if(w==2)
            {
                printf("%d %d\nB",As,Bs);
            }
         }
         else
         {
                if(As>Bs)
                {
                    printf("%d %d\nA",As,Bs);
                }
                else
                {
                    printf("%d %d\nB",As,Bs);
                }
         }
    return 0;
}
