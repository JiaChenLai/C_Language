#include <stdio.h>

//pointer : change original's number 
// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y ;
//     *y = temp ;
// }
void swap(int x,int y){
    int temp = x;
    x = y ;
    y = temp ;
    printf("after :%d %d\n",x,y);
}

int main(int a,int b){
    // int a=1,b=2;
    scanf("%d%d",&a,&b);
    printf("before : %d %d\n",a,b);
    swap(a,b);
    // swap(&a,&b);   //using pointer
    // printf("after : %d %d\n",a,b);
    printf("original : %d %d\n",a,b);
}