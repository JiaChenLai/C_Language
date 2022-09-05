//x=15 y=10 max=15
//x=15 y=10 min=10

#include <stdio.h>

int max(int *,int *);
int min(int *,int *);
int compare(int *,int *,int (*)(int *,int *));

int main(){
    int x=15,y=10,result;
    int *ptr = &x;
    int *ptr1 = &y;
    result = compare(ptr,ptr1,max);
    printf("x=%d y=%d max=%d\n",*ptr,*ptr1,result);
    result = compare(ptr,ptr1,min);
    printf("x=%d y=%d max=%d\n",*ptr,*ptr1,result);
}

int max(int *a,int *b){
    if(*a > *b) return *a;
    else return *b;
}
int min(int *a,int *b){
    if(*a > *b) return *b;
    else return *a;
}
int compare(int *a,int *b,int (*cmp)(int *,int *)){
    return (*cmp)(a,b);
}