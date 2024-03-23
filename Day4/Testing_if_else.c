#include "stdio.h"
int age=0;
int main(){
    printf("Enter Your age=\n");
    scanf("%d",&age);

    if(age<18){
        printf("You can't smoking");
    }else if(age>=18 && age<=45){
        printf("You can smoke");
    }else if(age>45){
        printf("You can't smoke");
    }

    return 0;
}

//if else
// control structure in C,Jav
//ascii table
