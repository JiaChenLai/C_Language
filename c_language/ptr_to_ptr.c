#include<stdio.h>

int main(){
    int var = 25;
    int *ptr = &var ; 
    int **ptr1 = &ptr;
    int ***ptr2  = &ptr1  ;
    printf("\n");
    printf("var  v:%8d a:%p",var,&var);
    printf("\nptr  v:%p a:%p",ptr,&ptr);
    printf("\nptr1 v:%p a:%p",ptr1,&ptr1);
    printf("\nptr2 v:%p a:%p",ptr2,&ptr2);
    printf("\n");
    printf("\n*ptr's  value:%8d(%p)",*ptr,ptr);
    printf("\n*ptr1's value:%p(%p)",*ptr1,ptr1);
    printf("\n*ptr2's value:%p(%p)",*ptr2,ptr2);
    printf("\n");
    //get multi-pointer's value
    printf("\n*ptr's  value:%8d(%p)",*ptr,ptr);
    printf("\n**ptr1's value:%8d(%p)",**ptr1,ptr1);
    printf("\n***ptr2's value:%8d(%p)",***ptr2,ptr2);
    printf("\n");
    
    
}