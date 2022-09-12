#if 0
input number of students =>
input n_th student's grade =>
input n+1_th student's grade =>
sum =>
average =>

using malloc()
#endif

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,*grade,sum=0;
    printf("input number of students = ");
    scanf("%d",&num);
    grade = (int *)malloc(num*sizeof(int));
        for(int i=0;i<num;i++){
            printf("\ninput %d_th student's grade =",i+1);
            scanf("%d",&grade[i]);
            sum += *(grade+i);
        }
        printf("\n sum = %d",sum);
        printf("\n average = %.2f",(float) sum/num);
}
