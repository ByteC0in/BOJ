#include <stdio.h>
#include <stdlib.h>
   int arr [9];
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int i=0;
    int x=0;
    for(int a=0;a<9;a++)
    {
        int n;
        scanf("%d",&n);
        arr[a]=n;
    }
   qsort(arr, 9, sizeof(int), compare);
    while(x==0)
    {

        if(i==9)
        {
            i=0;
        }
        for(int a=0;a<9;a++)
        {
            int seven[100];
            int all=0;

            int index = 0;
            int count =0;
            for(int b=0;b<9;b++)
            {
                if (a == i) continue;
                if (b == a) continue;
                if (b == i) continue;
                {
                    all+=arr[b];
                    seven[index]=arr[b];
                    index++;
                    count+=1;
                }

            }
                if(all==100&&count==7)
                {
                    for(int c=0;c<7;c++)
                    {
                        printf("%d\n",seven[c]);
                    }
                    x+=1;
                    break;
                }

        }
        i+=1;
    }
    return 0;
}
