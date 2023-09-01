#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("enter three integers");
    scanf("%d%d%d", &a,&b,&c);
    d=(a+b+c)/3.0;
    printf("%f\n",d);
    return 0;
}