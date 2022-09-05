#include <stdio.h>

long sumNtoN(register int start,register int max){
    register int temp ;
    int total = 0;
    for(temp = start;temp <=max;temp++)
    total += temp;
    return total ; 
}
int main(){
    long total = sumNtoN(1,10000);
    printf("total num = %d",total);
}