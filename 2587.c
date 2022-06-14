#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int arr[5];
int main()
{
    int all=0;
   for(int a=0;a<5;a++)
   {
       int n;
       scanf("%d",&n);
       arr[a]=n;
       all+=n;
   }
   qsort(arr, 5, sizeof(int), compare);
   printf("%d\n",all/5);
    printf("%d\n",arr[2]);
    return 0;
}
