#if 0
bitwise operations include
1) ~ (NOT)
2) <<、>> 
3) & (AND)
4) ^ (XOR)
5) | (OR)
#endif

#include <stdio.h>

int main(){
    char a = 0x3c; //0011 1100
    char b = 0x0f; //0000 1111
    char c = 0x03; //0000 0011
    char d = 0x78; //0111 1000
    char r;
    printf("value a   = %3d (%x)\n",a,a);
    printf("value b   = %3d (%x)\n",b,b);
    printf("value c   = %3d (%x)\n",c,c);
    printf("value d   = %3d (%x)\n",d,d);

    r = a & b;  //0000 1100 -> 0x0c
    printf("value a&b = %3d (%x)\n",r,r);
    r = a | b;  //0011 1111 -> 0x3f
    printf("value a|b = %3d (%x)\n",r,r);
    r = a ^ b;  //0011 0011 -> 0x33
    printf("value a^b = %3d (%x)\n",r,r);
}