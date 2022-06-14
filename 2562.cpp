#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp=0;
    int size=0;
    for(int a=0;a<9;a++)
    {
        int s;
        scanf("%d",&s);
        if(temp<s)
        {
            temp=s;
            size=a;
        }
    }
    printf("%d\n%d",temp,size+1);
    return 0;
}
