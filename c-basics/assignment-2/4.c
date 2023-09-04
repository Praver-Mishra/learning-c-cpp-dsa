#include<stdio.h>
int main()
{
    int x,y;
    printf("write the two values you want to swap");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("your result %d and %d\n", x,y);
    return 0;
}