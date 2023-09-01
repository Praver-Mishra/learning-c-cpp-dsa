#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("enter radius");
    scanf("%d",&a);
    b=(3.14)*(a*a);
    printf("area of circle is %.2f whose radius is %d\n", b,a);
    return 0;
}