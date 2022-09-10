//1's complement & 2's complement

#include<stdio.h>

int main(){
    char a = 0x2c; // 0010 1100
    printf("original a value = %3d (%x)\n",a,a);
    a = ~a ; // 1101 0011
    //------------------wrong
    // printf("a value of 1's complement = %3d (%x)\n",a,a);
    printf("a value of 1's complement = %3d (%x)\n",a&0xff,a&0xff);
    a = ~a ; // 0010 1100
    printf("a value of 2's complement = %3d (%x)\n",a,a);
}