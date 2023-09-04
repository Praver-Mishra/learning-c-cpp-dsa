#include<stdio.h>
int main()
{
    int x,y,a;
    printf("write the two values you want to swap: ");
    scanf("%d%d",&x,&y);
    a=y;
    y=x;
    x=a;
    printf("the number is %d %d\n", x,y);
    return 0;
}