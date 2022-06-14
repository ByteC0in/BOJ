#include <stdio.h>
#include <stdlib.h>
int main()
{
    int all=0;
    int temp=100;
    for(int a=0;a<7;a++)
    {
        int s;
        scanf("%d",&s);
        if(s%2!=0)
        {
            all+=s;
            if(s<temp)
            {
                temp=s;
            }
        }
    }
    if(all!=0)
    printf("%d\n%d",all,temp);
    else
    printf("-1");

    return 0;
}
