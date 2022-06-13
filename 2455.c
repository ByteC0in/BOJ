#include <stdio.h>
#include <stdlib.h>

int main()
{
    int all=0;
    int temp=0;
    for(int a=0;a<4;a++)
    {
        int s;
        int j;
        scanf("%d%d",&s,&j);
        all=all-s+j;
        if(all>temp)
        {
            temp=all;
        }

    }
     printf("%d",temp);
    return 0;
}
