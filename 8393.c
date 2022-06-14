#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int all=0;
    scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
        all=all+a;
    }
    printf("%d",all);
    return 0;
}
