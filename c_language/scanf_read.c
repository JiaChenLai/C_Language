#include <stdio.h>

int main(){
    char str[80];
    // char *ptr;
    do{
    printf("input words(x will be end)==>");
    scanf("%s",str);
    char *ptr = str;
    printf("ur input words : %s \n",str);
    }while(str[0]!='x');
}