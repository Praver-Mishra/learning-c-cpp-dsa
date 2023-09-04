#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    b=a;
    d=a/100;
    e=(a/10)%10;
    f=a%10;
    c=d+e+f;
    printf("The sum of the digits of %d is %d\n",b,c);

    return 0;
}
