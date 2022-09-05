#include <stdio.h>

void is_leap_year(int num){
    //(num % 100 = 0) && (num % 400==0) ->leap
    //(num % 100 != 0) && (num%4==0) ->leap
    if( ((num%100==0) && (num%400==0)) ||
        ((num%100!=0) && (num%4==0)))
        printf("is leap year");
    else
        printf("is not leap year");
}

int main(int year){
    printf("input the number :");
    scanf("%d",&year);
    is_leap_year(year);
}