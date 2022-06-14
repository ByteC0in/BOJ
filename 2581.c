#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m;
    int n;
    int min=0;
    int all=0;
    scanf ("%d",&m);
    scanf ("%d",&n);
    for(int a=m;a<=n;a++)
    {
       int answer=1;
        for(int b=2;b<=n;b++)
        {
            if(a%b==0)
            {   if(a!=b)
                {
                answer=0;
                break;
                }
            }
        }
        if(answer==1)
        {
            if(a!=1&&a!=0)
            {

                if(all==0)
                {
                    if(a!=1&&a!=0)
                    min=a;
                }
                all=all+a;
            }
        }
    }
    if(all==0)
    {
        all=-1;
    }
    printf("%d",all);
    if(all!=-1)
    {
        printf ("\n");
        printf("%d",min);
    }
    return 0;
}
