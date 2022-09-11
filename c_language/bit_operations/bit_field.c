#if 0
input integral of hexadecimal ==>  0f
x=1 y=1 z=3 (using bit_field)
final 4bit =>
when input = -1 , return;
#endif

#include<stdio.h>

struct bitfields{
    unsigned int x : 1;
    unsigned int y : 1;
    unsigned int z : 2;
};
//-------------wrong
// union number{
//     struct bitfields bits;
//     unsigned char value;
// };
//------------------
union {
    struct bitfields bits;
    unsigned char value;
}number;

int main(){
    char c,num;
    do{
        printf("input integral of hexadecimal :");
        scanf("%x",&num);
        if(num == -1) break;
        number.value = num ; 
        printf("x = %x\t",number.bits.x);
        printf("y = %x\t",number.bits.y);
        printf("z = %x\t",number.bits.z);
        printf("final 4 bits : %d \n",number.value & 0x0f);
    }
    while(1);
}