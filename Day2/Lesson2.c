//operator Lesson

#include "stdio.h"

//Arithmetric operator//+ - * / %
//Logical operator // && || !  true =true ,true/false, false/flase
//Relational operator == != > < >= <=
//Assignment operator += -= *= /=

//Bitwise operator & | ^=xor
//golbal variable/local variable
int firstNumber;
int secondNumber;

//firstnumber တောင်း/secondNnumber တောင်း
//သူတို့နှစ်ခုပါင်းပီးတော့ totalထဲကိုထည့်
//total ကိုထုတ်
int total;
int main(){

    printf("Please enter first number\n");
    scanf("%d",&firstNumber);
    printf("Please enter second number\n");
    scanf("%d",&secondNumber);
    total=firstNumber+secondNumber;
    printf("total number is %d",total);

    return 0;
}