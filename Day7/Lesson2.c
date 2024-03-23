#include "stdio.h"
int num1;
int num2;
int isEnvenfornum1;
int isEnvenfornum2;
int main(){
    printf("Enter data for num1\n");
    scanf("%d",&num1);

    printf("Enter data for num2\n");
    scanf("%d",&num2);
    isEnvenfornum1=num1%2;
    isEnvenfornum2=num2%2;
    printf("num1=%d and num 2=%d\n",isEnvenfornum1,isEnvenfornum2);

    if(isEnvenfornum1 != 1 || isEnvenfornum2 !=1){
        printf("They can sum\n");
        int total=num1+num2;
        printf("their sum is=%d",total);
    }else if(isEnvenfornum1==1 && isEnvenfornum2==1){
        printf("They are not even");
    }
    return 0;
}
//w3schools

