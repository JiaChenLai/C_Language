#include <stdio.h>
#include <string.h>
#define size 20


int main(){
    int input;
    // int size = sizeof(a)/sizeof(a[0]);
    // char temp[size];
    // char *temp;
    char *month[] = {"illegal","January","February",
    "March","April","May","June","July","August",
    "September","October","November","December"
    };

    printf("input month\n");
    scanf("%d",&input);
    if(input>0 && input<13){
        printf("%d's month full name : %s",input,month[input]);
    }
    else
    // english_transformer(temp,getmonth(input));
    printf("%s",month[0]);
}
/*
char *getmonth(int num){
    char *month[] = {"illegal","January","February",
    "March","April","May","June","July","August",
    "September","October","November","December"
    };
    if(num>0)
        return month[num];
    else
        return month[0];
}

char *english_transformer(char *copy_item,char *source){
    int count = 0;
    while( *(source+count) != '\0'){
        *(copy_item + count) = *(source + count);
        count++ ;  
    }
    return copy_item;
}
*/