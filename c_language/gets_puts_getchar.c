#include <stdio.h>

int main(){
    char str[80];
    printf("input words : ");
    //-------------------------wrong
    //char ch = gets();
    //------------------------
    gets(str);
    puts(str);
    putchar('\n');
    // printf("\t");

    
    int i;
    printf("input words2 : ");
    char ch2,str1[80];
    for (i=0;(ch2=getchar())!=EOF && ch2 != '\n';i++){
        str1[i] = ch2;
    }
    str1[i] = '\0';
    //-------------------------wrong
    // puts(ch2);
    //---------------------------
    puts(str1);
    putchar('\n');
    
}