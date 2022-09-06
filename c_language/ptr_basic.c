#include <stdio.h>

int main(){
      int var = 25;
      int *ptr = &var ;
      int var1 = &ptr ;
      printf("var value = %d address = %p",var,ptr);
      printf("var1 value = %p address = %p",&ptr,&var1);
      printf("ptr value = %p address = %p",ptr,&ptr);
      printf("ptr valuse = %d ",*ptr);
}
