#include "stdio.h"
int a=10;
int b=20;
int swap;
int main(){
    printf("before swapping the value of a is %d\n",a);
    printf("before swapping the value of b is %d\n",b);
    swap=a;
    a=b;
    b=swap;


    printf("After swapping the value of a is %d\n",a);
    printf("After swapping the value of b is %d\n",b);


    return 0;
}