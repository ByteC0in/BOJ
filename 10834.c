#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    long long check=1;
    long long direction=0;
    scanf("%lld",&m);
    for(long long a=0;a<m;a++)
    {
        long long a,b,s;
        scanf("%lld%lld%lld",&a,&b,&s);
        check=(check*b)/a;
        if(s==1)
        {
            direction=direction+1;
        }
    }
    if(direction%2==1)
    {
        direction=1;
    }
    else
    {
        direction=0;
    }
    printf("%lld %lld",direction,check);

    return 0;
}
