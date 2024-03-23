//Control structure
//if else
//for loop
//while loop
//do while loop
//switch case break

//if else //relational operator
#include "stdio.h"
int number;
char email[50];
int password;
int main(){
    printf("Please enter 1 to login\nPlease enter 2 to register\nPlease enter 3 to exit\n");
    scanf("%d",&number);

    if(number<10){
        printf("This is login\n ");
        printf("Enter email\n");
        scanf("%s",&email);
        printf("Enter password\n");
        scanf("%d",&password);

    }else if(number>10){
        printf("This is register ");
        printf("Enter email\n");
        scanf("%s",&email);
        printf("Enter password\n");
        scanf("%d",&password);
    }else{
        printf("exit ");
    }
    return 0;
}
