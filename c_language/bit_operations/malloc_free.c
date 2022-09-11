#if 0
test malloc() & free()
#endif


#include <stdio.h>
#include <stdlib.h>

int main(){
    float *fp ;
    fp = (float*) malloc(sizeof(float));
    if(fp != NULL){
        *fp = 3.1415926;
        printf("fp address %p\n",fp);
        printf("fp value = %f\n",*fp);
        printf("fp byte = %d\n",sizeof(float));
        free(fp);
    }
    else
        printf("malloc failed ! \n");
}