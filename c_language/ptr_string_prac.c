#include<stdio.h>

int main(){
    char str[20] = "this is a book.";
    char str1[20];
    char *ptr1 = "this is a apple.";;
    char *ptr = str ;
    int i=0;
    // ptr1 = "this is a apple.";
    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
    printf("ptr1 = %s\n",ptr1);

    printf("copy test\n");
    // ptr1 = str1 ;
    char str2[20];
    char *ptr2 = str2; 
    while( *ptr != '\0'){
        *(ptr2+i) = *(ptr++);
        i++;
    }
    *(ptr2+i) = '\0';
    printf("copy ptr2 = %s\n",ptr2);
    printf("copy str2 = %s\n",str2);
}