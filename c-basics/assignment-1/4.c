#include<stdio.h>
int main()
{
    float a,b;
    printf("enter radius");
    scanf("%f",&a);
    b=(3.14)*(a*a);
    printf("area of circle is %.2f having the radius %f\n", b,a);
    return 0;
}