#include <stdio.h>
#include <stdlib.h>
int arr[5]={0,};
int main()
{
   int q;
   int answer=0;
   scanf("%d",&q);
   for(int a=0;a<5;a++)
   {
       int s;
       scanf("%d",&s);
        if(s==q)
        {
                answer+=1;
        }
   }
   printf("%d",answer);
    return 0;
}
