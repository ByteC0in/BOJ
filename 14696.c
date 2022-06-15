#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    char answer[10000]={0,};
    for(int a=0;a<n;a++)
    {

        int N;
        scanf("%d",&N);
        int arr[4]={0,};
        int arr2[4]={0,};
        for(int b=0;b<N;b++)
        {
            int s;
            scanf("%d",&s);
             for(int c=4;c>=1;c--)
             {
                 if(s==c)
                 {
                     arr[c-1]++;
                     break;
                 }
             }
          }
          int N2;
        scanf("%d",&N2);
        for(int b=0;b<N2;b++)
        {
            int s;
            scanf("%d",&s);
             for(int c=4;c>=1;c--)
             {
                 if(s==c)
                 {
                     arr2[c-1]++;
                     break;
                 }
             }
        }
        for(int b=3;b>=0;b--)
        {
            if(arr[b]>arr2[b])
            {
                answer[a]='A';
                break;
            }
            else if(arr[b]<arr2[b])
            {
                answer[a]='B';
                break;
            }
            else
            {
                if(b==0)
                {
                    answer[a]='D';
                    break;
                }
            }
        }

    }
    for(int a=0;a<n;a++)
    {
        printf("%c\n",answer[a]);
    }
   return 0;
}
