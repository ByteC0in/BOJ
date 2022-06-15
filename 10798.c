#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[5][15]={0,};
int stl[5]={0,};
char sar[5][15]={0,};
int main()
{
    int size=0;

   for(int a=0;a<5;a++)
   {
       char s[15]="";
       scanf("%s",s);
       strcpy(arr[a],s);
       stl[a]=strlen(s);
   }
    for(int a=0;a<15;a++)
    {


            for(int b=0;b<5;b++)
            {
                if(arr[b][a]!=' '&&stl[b]>a)
                printf("%c",arr[b][a]);
                else continue;
            }
            size+=1;

    }


    return 0;
}
