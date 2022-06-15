#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high=0;
    int low=1000;
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        int s;
        scanf("%d",&s);
        if(s>high)
        {
            high=s;
        }
        if(s<low)
        {
            low=s;
        }
    }
    printf("%d",high-low);

   return 0;
}
