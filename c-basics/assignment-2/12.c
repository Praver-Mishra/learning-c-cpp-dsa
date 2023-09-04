 #include<stdio.h>

 int main() {

 int a,b,c,d;

 printf("enter the number: ");
 scanf("%d",&a);

b=a/100;
c=(a/10)%10;
d=a%10;

printf("the number is %d%d%d\n",d,b,c);

    return 0;
 }