#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number: ");
    scanf("%d",&x);
    y=x%10;
    printf("the unit digit of %d is %d\n", x,y);
    return 0;
}