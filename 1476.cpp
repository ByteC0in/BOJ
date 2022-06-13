#include <stdio.h>
#include <stdlib.h>

int main()
{
    short E;
    short S;
    short M;
    scanf("%hd%hd%hd",&E,&S,&M);
    short e=0;
    short s=0;
    short m=0;
    int year=0;
    while(E!=e||S!=s||M!=m)
    {
        e++;
        if(e>15) e=e-15;
        s++;
        if(s>28)s=s-28;
        m++;
        if(m>19)m=m-19;
        year++;
    }
    printf("%d",year);
    return 0;
}
