#include <stdio.h>

int abs(int n){
    if(n<0)
        return -n;
    else
        return n;
}

int main(int n){
    printf("enter : ");
    scanf("%d",&n);
    printf("answer : %d",abs(n));
    return 0 ;
}