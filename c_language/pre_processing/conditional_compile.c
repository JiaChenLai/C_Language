//using the conditional compilation of pre_processing to control original code's compilation
#include <stdio.h>
#define DEBUG 1
#define ARRAY_SIZE 5

#ifdef EXTENTION
    #define MAX_SIZE 75
#else   
    #define MAX_SIZE 50
#endif

int main(){
    int x=5,y=10,index=2;
    int array[ARRAY_SIZE] = {2,4,6,8,10};
    #ifdef DEBUG
        printf("Debug : x= %d,y= %d\n",x,y);
    #endif

    printf("MAX_SIZE = %d\n",MAX_SIZE);

    #if ARRAY_SIZE >1
        printf("index = %d\n",index);
        printf("array[index] = %d",array[index]);
    #elif ARRAY_SIZE < 0
        printf("over bounded condition \n");
    #else
        printf("no definition or only one element");
    #endif

    
}