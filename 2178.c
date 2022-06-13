#include <stdio.h>
#include <stdlib.h>
int n,m;
int last,begin=0;
int arr[200][200]={0,};
typedef struct
{
    int x;
    int y;
}locate;
locate queue[40000]={0,};
void push(int y,int x)
{
    queue[last].x=x;
    queue[last].y=y;
    last++;
}
void pop()
{
    begin++;
}
locate top()
{
    return queue[begin];
}
int main()
{
    locate maze;
    scanf("%d%d",&n,&m);
    for(int a=0;a<n;a++)
    {
        char s[200]={0,};
        scanf("%s",s);
        for(int b=0;b<m;b++)
        {
            arr[a][b]=s[b]-48;
        }
    }
    push(0,0);
    arr[0][0] = 2;
    while(1)
    {
        maze = top();
        pop();
        if(arr[maze.y+1][maze.x]==1)
        {
            arr[maze.y+1][maze.x] = arr[maze.y][maze.x] + 1;
            push(maze.y+1,maze.x);
        }
        if(arr[maze.y][maze.x+1]==1)
        {
            arr[maze.y][maze.x+1] = arr[maze.y][maze.x] + 1;
            push(maze.y,maze.x+1);
        }
        if(arr[maze.y-1][maze.x]==1)
        {
            arr[maze.y-1][maze.x] = arr[maze.y][maze.x] + 1;
            push(maze.y-1,maze.x);
        }
        if(arr[maze.y][maze.x-1]==1)
        {
            arr[maze.y][maze.x-1] = arr[maze.y][maze.x] + 1;
            push(maze.y,maze.x-1);
        }
        if(maze.y==n-1&&maze.x==m-1)
        {
            break;
        }
    }
    printf("%d",arr[n-1][m-1]-1);
    return 0;
}
