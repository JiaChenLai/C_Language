#include <stdio.h>

int square (int);

int main(){
    int x = 5;
    //------------------------wrong
    // int (*ptr) (x) = square;
    int (*ptr) (int) = square;
    printf("x * x = %d ",(*ptr)(x));
}

int square(int num){
    int result = num*num;
    return result;
}