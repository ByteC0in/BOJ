#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    scanf("%d", &n);
    int i=0;
    int l=1;
    int a=0;
    while(1)
    {

        if(a==n)
        {
            printf("%d",i);
            break;
        }
        i=i+l;
        a=a+1;

        if(a==n)
        {    printf("%d",l);
            break;

        }
        l=l+i;
        a=a+1;
    }


    return 0;
}
