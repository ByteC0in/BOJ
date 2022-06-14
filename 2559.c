#include <stdio.h>
#include <stdlib.h>
int queue [1000000]={0,};
int begin=0;
int finish=0;
int all=0;
int size=0;
void push(int s)
{
    queue[finish]=s;
    all=all+s;
    finish++;
    size++;
}
void q()
{
    all=all-queue[begin];
    queue[begin]=0;
    begin=begin+1;
    size=size-1;
}
int main()
{
    int n,k;
    int temp=-100000000;
    scanf("%d%d",&n,&k);
    for(int a=0;a<n;a++)
    {
        int s;
        scanf("%d",&s);
        push (s);
        if(size==k)
        {
            if(temp<all)
            {
                temp=all;
            }
            q();
        }

    }
    printf("%d",temp);
    return 0;
}
