#include <Stdio.h>

int main(){
    char a = 0x03,b=120;
    printf("a's value = %3d (%x)\n",a,a); //0000 0011
    printf("b's value = %3d (%x)\n",b,b); //0111 1000
    printf("left_shift a<<1 = %3d (%x)\n",a<<1,a<<1);
    printf("left_shift a<<2 = %3d (%x)\n",a<<2,a<<2);
    printf("left_shift b>>1 = %3d (%x)\n",b>>1,b>>1);
    printf("left_shift b>>2 = %3d (%x)\n",b>>2,b>>2);
}