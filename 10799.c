#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int arr[100000]={0,};
int length=0;
push(int arr[])
{
    arr[length]=1;
 length=length+1;
}
pop(int arr[])
{
    length=length-1;
    arr[length]=0;
}
int main()
{
    int size=0;
    int answer=0;
    char stick[100500]={0,};
    scanf("%s",&stick);
    for(int a=0;a<100500;a++)
    {
     if(stick[a]==0)
     {
         break;
     }
     else{
        size++;
     }
    }

    for(int a=0;a<size;a++)
    {
        if(stick[a]=='(')
        {
            push(arr);
        }
        else if(stick[a-1]=='('&&stick[a]==')')
        {
            for(int b=0;b<length;b++)
            {
                arr[b]++;
            }
            pop(arr);
        }
        else if(stick[a]==')')
        {
            answer=answer+arr[length-1];
            pop(arr);
        }

    }
    printf("%d",answer);
    return 0;
}
