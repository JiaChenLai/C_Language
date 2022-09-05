#include <stdio.h>
#include "pre_process.h"

int main(){
    int radius;
    // printf("input circle radius : ") ;

    // scanf("%d",&radius);

    do{
        printf("\ninput circle radius : ") ;
        scanf("%d",&radius);
        printf("\nthe circle area is %.3f ",area(radius));
        
            // printf("\n error input");
    }
    while(radius>=0);
    printf("\n error input");
}

double area(int a){
    return PI*a*a;
}