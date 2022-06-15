#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n;
    int arr[10000];
    int arr2[10000];
    char s[100]= {0};
    int size=0;
    scanf("%d",&n);
    int salt=0;
    for(int a=0;a<n;a++)
    {

        s[0]="\0";
        scanf("%s",&s);
        int x;
       int a1 = strcmp(s, "push");
       int a2 = strcmp(s, "pop");
       int a3 = strcmp(s, "size");
       int a4 = strcmp(s, "empty");
       int a5 = strcmp(s, "top");
        if(a1==0)
        {
            scanf("%d",&x);
            arr[size]=x;
            size+=1;
        }
        if(a2==0)
        {
            if(size!=0)
            {
                arr2[salt]=arr[size-1];
                size=size-1;
            }
            else
            {
             arr2[salt]=-1;
            }
            salt+=1;
        }
        if(a3==0)
        {
           arr2[salt]=size;
           salt+=1;
        }
        if(a4==0)
        {
            if(size==0)
            {
                arr2[salt]=1;
            }
            else
            {
                arr2[salt]=0;
            }
            salt+=1;
        }
        if(a5==0)
        {   if(size!=0)
            {
                arr2[salt]=arr[size-1];
            }
            else
            {
                arr2[salt]=-1;
            }
            salt+=1;
        }
    }
    for(int a=0;a<salt;a++)
    {
        printf("%d\n",arr2[a]);
    }
    return 0;
}
