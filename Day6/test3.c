#include "stdio.h"
float a;
int b;
int main(){

    printf("Enter a\n");
    scanf("%f",&a);

    printf("%f\n",a);

    if(a>b){
        printf("a is greater than b");
    }else if(b>a){
        printf("b is greater than a");
    }

    return 0;
}