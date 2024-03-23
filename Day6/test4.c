#include "stdio.h"

int a=10;
float b=10.1;
float c=111;

int main(){


//    printf("size of a %d\n", sizeof(10));
//    printf("size of a %d\n", sizeof(10.0100));
//    printf("size of a %d\n", sizeof(10.20));

    if(a>b || a<c){
        printf("a is greatest");
    }else if(b>a || b>c){
        printf("b is greatest");
    }else if(c>a || c>b){
        printf("c is greatest");
    }

    return 0;
}
//stackoverflow