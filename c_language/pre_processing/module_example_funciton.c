//function file
#include <stdio.h>

//----'static' means only for this file
//static void max_value(void);
//static void min_value(void);
static int result;
int var1,var2;
//function code
static void max_value(){
    (var1 > var2) ? (result = var1) : (result = var2);  
}
static void min_value(){
    (var1 < var2) ? (result = var1) : (result = var2);
}

void compare_result(int num){
    printf("var1 = %d",var1);
    printf("var2 = %d",var2);
    if(num == MAX_COMPARE){
        max_value();
        printf("max_value = %d\n",result);
    }
    else{
        min_value();
        printf("min_value = %d\n",result);
    }

}

