#include "stdio.h"
int numbers[10]={11,22,33,44,55,66,77,88,99,100};
int b=12;
int c=23;
int main()

{
    for(int a=0;a<b;a++)
    {
        if(a==3){
            printf("this is %d\n",a);
//            break;
        }
        printf("%d\n",a);
    }
//    printf("After seeing a=3");
    return 0;
}
//for loop
//0+12*23=35 //1+12+23=36