#include<stdio.h>
int main()
{
    int x;
    printf("write a number: ");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("the number is %d\n",x);

    return 0;
}