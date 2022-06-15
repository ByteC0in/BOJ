#include <stdio.h>
#include <stdlib.h>
int main()
{
    int check[100][4]={0,};
    int time;
    int size_check =9999;
    int size=0;
    scanf("%d",&time);
    for(int a=0;a<100;a++)
    {
        for(int b=0;b<100;b++)
        {
            for(int c=0;c<100;c++)
            {
                if((300*a)+(60*b)+(10*c)==time)
                {
                    if(a+b+c<size_check)
                    {
                       check[0][0]=a;
                       check[0][1]=b;
                       check[0][2]=c;
                       check[0][3]=a+b+c;
                       size=size+1;
                    }

                }
            }
        }
    }
    if(size!=0)
    {
        for(int a=0;a<3;a++)
        {
            printf("%d ",check[0][a]);
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}
