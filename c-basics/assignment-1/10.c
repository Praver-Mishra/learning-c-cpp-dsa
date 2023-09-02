#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter date(DD/MM/YYYY)");
    scanf("%d/%d/%d", &a,&b,&c);
    printf("Day - %d, Month - %d, year - %d\n", a,b,c);
    return 0;
}