#include<stdio.h>

int main(){
      char str1[20] = "just for test!";
      char *ptr1 = str1;
      char *str="this is test!";
      char *ptr="only for test";
      // char *ptr  = &str[0];
      printf("%s\n",str);      
      printf("%s\n",ptr);
      ptr = str;
      printf("%s\n",str);      
      printf("%s\n",ptr);
            printf("%s %p\n",str1,ptr1);
      return 0;
}

