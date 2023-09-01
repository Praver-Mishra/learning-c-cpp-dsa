#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter initial principal balance");
    scanf("%f", &b);
    printf("enter annual interest rate");
    scanf("%f", &c);
    printf("enter Time(in years)");
    scanf("%f", &d);
    a=(b*c*d)/100;
    printf("%f\n",a);
    return 0;
}