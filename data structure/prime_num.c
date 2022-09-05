#include <stdio.h>


int prime_check(int num){
    for(int i=2;i<num;i++){
        if(num%i==0)
            return 0;}
        return 1;
    
}

//error
/*int prime_check(int num){
    for(int i=2;i<num;i++){
        if(num%i==0)
            printf("is not a prime num");
            return 0 ;
    }
    printf("in a prime num");
    return 1;
}*/


int main(int num){
    printf("input ur num : ");
    scanf("%d",&num);
    if(prime_check(num))
        printf("%d is a prime num",num);
    else
        printf("%d is not a prime num",num);
}
/*
int main(int num){
    printf("input ur num : ");
    scanf("%d",&num);
    prime_check(num);
}
*/