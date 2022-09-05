#include <stdio.h>

int a,b=3;
void fun_a(){
    int a = 4; // setting of local variable
    printf("the fun_a's setting a = %d b = %d \n",a,b);
    printf("funa -> a+b = %d\n",a+b);
}
void fun_b(){
    a = 5,b=6; // setting of global variable
    printf("the fun_b's setting a = %d b = %d \n",a,b);
    printf("funb -> a+b = %d\n",a+b);
}

int main(){
    printf("global num ===> a = %d b = %d \n",a,b);
    fun_a();
    printf("call fun_a global num ===> a = %d b = %d \n",a,b);
    fun_b();
    printf("call fun_b global num ===> a = %d b = %d \n",a,b);
}
