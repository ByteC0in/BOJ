#include <stdio.h>
#include <stdlib.h>


int prime[1000000];
int main()
{
    int n;
    int m;
    scanf ("%d",&m);
    scanf ("%d",&n);
    prime[0]=0;
    prime[1]=0;
    for(int i =2; i < 1000000; i++)
    {
        prime[i] = i;
    }
    for(int a=2;a<1000000;a++)
    {
       for(int b=a+a;b<1000000;b+=a)
       {
           if(b%a==0)
           {
               prime[b]=0;
           }
       }
    }
    int j=0;
    for(int a=m;a<=n;a++)
    {
        if(prime[a]!=0)
        {
            printf("%d\n",prime[a]);

        }
    }

    return 0;
}
