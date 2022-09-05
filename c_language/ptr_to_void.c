#include <stdio.h>

int numcmp(int *,int *);
char chrcmp(char *,char *);
int compare(void *,void *,int (*)(void *,void *));

int main(){
    int x=15,y=10,result;
    // ptr
    int *ptr = &x;
    int *ptr1 =&y;
    char a='F',b='F';
    // ptr
    char *ptr2 = &a;
    char *ptr3 = &b;
    // (void *)ptr
    result = compare((void *)ptr,(void *)ptr1,(int (*)(void *,void*))numcmp);
    printf("x = %d y = %d return %d\n",x,y,result);
    result = compare((void *)ptr2,(void *)ptr3,(int (*)(void *,void *))chrcmp);
    printf("a = %c b = %c return %d\n",a,b,result);
    return 0;
}
int numcmp(int *a,int *b){
    if(*a == *b)
        return 0 ;
    else if(*a > *b)
        return 1;
    else 
        return -1; 
    }

char chrcmp(char *a,char *b){
    if(*a == *b)
        return 0 ;
    else if(*a > *b)
        return 1;
    else 
        return -1; 
    }
int compare(void *a,void *b,int (*cmp)(void *,void *)){
    //---------------------------wrong
    // return (*cmp)(void *a,void *b);
    return (*cmp)(a,b);
}