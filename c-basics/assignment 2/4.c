#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter length breadth and height");
    scanf("%d%d%d", &a,&b,&c);
    d=a*b*c;
    printf("%d\n", d);
    return 0;
}