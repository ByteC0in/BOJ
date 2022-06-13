#include <stdio.h>
#include <stdlib.h>
int count=0;
typedef struct ele
{
    int entity;
    int place;
}element;
typedef struct stacktype
{
    element arr[600000];
    int top;
}stack;
element arr[600000]={0,};
void init(stack *s)
{
    return (s->top=0);
}
void pop(stack *s)
{
    s->top--;
}
void push(stack*s,element A)
{
    s->top++;
    s->arr[s->top]=A;
}
element top(stack *s)
{
    return (s->arr[s->top]);
}
int answer[600000]={0,};
int main()
{
    int n;
    stack st;
    init(&st);
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        element S;
        init(&S);
        int s;
        scanf("%d",&s);
        S.entity =s;
        S.place =a+1;
        arr[a]=S;
    }
    for(int a=0;a<n;a++)
    {
        while(1)
        {
            if(st.top==-1)
            {
                push(&st,arr[a]);
                break;
            }
            if(top(&st).entity>arr[a].entity)
            {
                answer[a]=top(&st).place;
                push(&st,arr[a]);
                break;
            }
            else
            {
                pop(&st);
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        printf("%d ",answer[a]);
    }
   return 0;
}
