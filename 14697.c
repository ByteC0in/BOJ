#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A;
    int B;
    int C;
    int all;
    int check=0;
    scanf("%d%d%d%d",&A,&B,&C,&all);
    for(int a=0;a<=all/A;a++)
    {
        for(int b=0;b<=all/B;b++)
        {
            for(int c=0;c<=all/C;c++)
            {
                if((A*a)+(B*b)+(C*c)==all)
                {
                        check=1;
                        break;
                }
            }
        }
    }
    printf("%d",check);
   return 0;
}
