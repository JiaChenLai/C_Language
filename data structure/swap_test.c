#include <stdio.h>
#include <stdlib.h>

//void s_test(int,int);

void swap(int x,int y){
    //int temp ;
    int temp = x;
    x = y;
    y = temp; 
    printf("%d\n",x);
    printf("%d\n",y);
}

int main(void){
    int x=5,y=6;
    printf("input num : %d %d\n",x,y);
    //scanf("%d %d",&input1,&input2);
    swap(x,y);
    // printf("%d",x);
    return 0;
}

