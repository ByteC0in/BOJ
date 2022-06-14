#include <stdio.h>
#include <stdlib.h>
int arr[10]={0,1,2,3,4,5,6,7,8,9};
int arr2[10]={0,};
int main()
{
    int A;
    int B;
    int C;
    scanf("%d%d%d",&A,&B,&C);
    int result=A*B*C;
    while(result>0)
    {
        int temp=result%10;
        result=(result-temp)/10;
        for(int a=0;a<10;a++)
        {
            if(temp==arr[a])
            {
                arr2[a]++;
                break;
            }
        }
    }
    for(int a=0;a<10;a++)
    {
        printf("%d\n",arr2[a]);
    }
    return 0;
}
