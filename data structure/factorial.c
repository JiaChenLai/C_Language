#include<stdio.h>
#include<stdlib.h>
int factorial(int n){
    int a[2048] = {0},i,j;
    a[0] = 1;
    if(n==0)
        return 1;
    else{ 
        if(n<13)
        return n*factorial(n-1); 
        else{

            for(i=1;i<=n;i++){
                for (j=0 ; j < sizeof(a)/sizeof(a[0]) ; j++) {
                   a[j] *= i;
                }
                for(j=0;j< sizeof(a)/sizeof(a[0])-1;j++){
                    a[j+1] += a[j]/10;
                    a[j] %= 10;
                }
            }
        for (i=sizeof(a)/sizeof(a[0])-1 ; i >=0 ; i--) {
            if (a[i] != 0) 
            break;
        }

        for ( ; i>=0 ; i--) {
            return a[i];
        }
    }
    }        
}
    /*int A[k] = {0};
    int number = factorial(k);
    //printf("%d\n",number);
    A[0] = number % 10;
    for(int n=1;n<=(number%(10*k));n++){
        A[n] = number / 10;
            if(A[n]>=10)
                A[n+1] += A[n] / 10; 
    }*/
int main(int k){
    printf("input ur number");
    scanf("%d",&k);
    for(int w=1;w<=k;w++){
        printf("%d != %d\n",w,factorial(w));
    }
    return 0;
}
