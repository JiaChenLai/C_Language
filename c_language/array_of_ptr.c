#include<stdio.h>
#define row 4
#define column 10

int main(){
    printf("show tow dimension array\n");
    char name[row][column]={"apple","banana","cat","dog"};
    /*
    for(int i=0;i<row;i++){
    printf("name[%d] = [%s]\n",i,name[i]);
    }
    */
    char *ptr = NULL;
    for(int i=0;i<row;i++){
        printf("name[%d]=[",i);
        ptr = name[i];
            for(int j=0;j<column;j++){
                printf("%c",*(ptr+j));
                }
        printf("]\n");
    }
   
    printf("show array of pointer\n");
    char *name2[row]={"apple","banana","cat","dog"};
    for(int k=0;k<row;k++){
        printf("name2[%d]=[",k);
        ptr = name2[k];
            for(int l=0;*(ptr+l)!='\0';l++){
                printf("%c",*(ptr+l));
            }
        printf("]\n");
     }
 }
