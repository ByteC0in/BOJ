#include <stdio.h>
#include <stdlib.h>

int triple[3];
int mutiply[3];
int main()
{
    int n;
    int m;
    char out[10]={0,};
    int all=0;
    int place=1;
    //char out1[10];
    char *out1;
    scanf("%d",&n);
    scanf("%d",&m);
    sprintf(out,"%d",m);
    //out1 = itoa(m,out,10);
    for(int a=2;a>=0;a--)
    {
        printf("%d\n",(out[a]-48)*n);
        all=all+((out[a]-48)*n*place);
        place=place*10;
    }
    printf("%d\n",all);
    return 0;
}
