#include <stdio.h>
#include <stdlib.h>
typedef struct line
{
    int spot;
    int color;
}arrow;
arrow arr[5000];
int main()
{
    int all=0;
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        arrow A;
        int s;
        int co;
        scanf("%d%d",&s,&co);
       A.spot=s;
       A.color=co;
        arr[a]=A;
    }
    for(int a=0;a<n;a++)
    {
        int temp=100000000;
        for(int b=0;b<n;b++)
        {
            if(a!=b)
            {
                if(arr[a].color==arr[b].color)
                {
                    int temp2=abs(arr[a].spot-arr[b].spot);
                   if(temp>temp2)
                   {
                       temp=temp2;
                   }
                }
            }
        }
        all=all+temp;
    }
    printf("%d",all);
   return 0;
}
