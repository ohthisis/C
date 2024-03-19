#include "stdio.h"
char vowel[5]={'a','e','i','o','u'};
char consonant[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
char word;
int main(){

    printf("Enter a word to check vowel or consonant");
    scanf("%c",&word);
    for(int a=0;a<5;a++){
        if(vowel[a]==word){
            printf("This is vowel %c\n",vowel[a]);
        }
        else{
            for(int i=0;i<21;i++)
            if(consonant[i]==word){
                printf("This is consonant\n %c",consonant[i]);
            }
        }
    }
    return 0;
}
//operator
//control structure in C