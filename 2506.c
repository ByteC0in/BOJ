#include <stdio.h>
#include <stdlib.h>
int arr[100]={0,};
int main()
{
    int n;
    int score=0;
    int add=1;
    scanf("%d",&n);

    for(int a=0;a<n;a++)
    {
        int s;
        scanf("%d",&s);
        arr[a]=s;
    }
    for(int a=0;a<n;a++)
    {
        if(arr[a]==1)
        {
                score=score+add;
                add+=1;
        }
        else
        {
                add=1;
        }
    }
    printf("%d",score);
    return 0;
}
