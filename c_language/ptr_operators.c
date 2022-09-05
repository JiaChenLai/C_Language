#include <stdio.h>
#define size 5
int main(){
      // int var[size] = {NULL};
      int var[size] = {25,0,0,0,0};
      
      int *ptr = &var ;
      int var1 = &ptr ;
      printf("var value = %d \naddress = %p\n",var[0],ptr);
      // printf("var1 value = %p address = %p\n",&ptr,&var1);
      // printf("ptr value = %p address = %p\n",ptr,&ptr);
      // printf("ptr valuse = %d ",*ptr);
}
