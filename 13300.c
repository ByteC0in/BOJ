#include <stdio.h>
#include <stdlib.h>
int arr[6][2]={0,};
int main()
{
    int n;
    int k;
    int all=0;
    scanf("%d%d",&n,&k);
    for(int a=0;a<n;a++)
    {
        int s;
        int y;
        scanf("%d%d",&s,&y);
        arr[y-1][s]++;
    }
    for(int a=0;a<6;a++)
    {
        for(int b=0;b<2;b++)
        {
            if(arr[a][b]%k!=0)
            {
                all=all+(arr[a][b]/k)+1;
            }
            else
            {
                all=all+(arr[a][b]/k);
            }
        }
    }
    printf("%d",all);
    return 0;
}
