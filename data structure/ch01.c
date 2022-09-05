#include <stdio.h>
#include <climits>

/* 
//iterative algorithm for n factorial
//allow the requestion : n < 13 (restriction)
//n = 0 -> 0!=1
//n = 1 -> 1!=1
//n = 2 -> 2!=1*2
//n = k  -> k!=1*...*k
int main(){
    int a,temp=1;
    scanf("%d",&a);
    if(a==0)
        printf("%d! = 1",a);
    else{
        for(int j=1 ; j<=a ; j++){
            temp *= j ;
            printf("%d ! = %d\n",j,temp);
        }
    }
}
*/


//recursive for n factorial
void factorial(int a){
    //scanf("%d",&a);
    if(a==0)
               printf("%d ! = 1",a);
        // return 1;
    else{
                for(int i=1 ;i<=a;i++){
                printf("%d ! = %d\n",i,a * factorial(a-1));
                }
        //return a * factorial(a-1);
    }       
}

int main(){
    int num;
    scanf("%d",&num);
    /*
    if(num==0)
    printf("%d! = 1",num);
    else{
        for(int i=1;i<=num;i++){
        printf("%d! = %d\n",i,factorial(i));
        }*/
    }
}
