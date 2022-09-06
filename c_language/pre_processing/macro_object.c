#include <stdio.h>

#define FORMAT "Integral value = %d \n"
#define MSG "End!\n"
#define ONE 1
#define TWO ONE+ONE

int main(){
    printf(FORMAT,ONE);
    printf(FORMAT,TWO);
    printf(MSG);
}
