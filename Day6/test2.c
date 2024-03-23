#include "stdio.h"
int sec;
int mins;
int hours;

int main(){
    printf("Please enter hour");
    scanf("%d",&hours);

    mins=hours*60;
    printf(" %d mins\n",mins);

    sec=mins*60;
    printf("%d seconds",sec);

return 0;
}
//5 hours in 300 mins
//300 mins in 18000 seconds
//medium
//linkedil