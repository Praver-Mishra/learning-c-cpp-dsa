#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("enter cost price of one dozen bananas");
    scanf("%f",&a);
    printf("enter selling price of one dozen bananas");
    scanf("%f", &b);
    c=(a/12)*25;
    d=(b/12)*25;
    e=d-c;
    printf("total profit is %f rupees\n",e);
    return 0;
}