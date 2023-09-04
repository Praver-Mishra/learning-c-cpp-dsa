#include<stdio.h>

int main() {
    
    int b,c,d,e,x;
    float y;
    char z;
    double a;

    b=sizeof(x);
    c=sizeof(y);
    d=sizeof(z);
    e=sizeof(a);

    printf("size of an int variable is %d, ....a float variable is %d, ....a char variable is %d and .....a double type variable is %d\n", b,c,d,e);
    
    return 0;
}