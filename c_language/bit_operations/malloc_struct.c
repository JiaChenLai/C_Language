#if 0
input number of student =>
student ID =>
midterm grade =>
fianl grade =>
average =>
student ID =>
midterm grade =>
fianl grade =>
average =>
#endif

#include<stdio.h>
#include<stdlib.h>

struct test{
    int min_grade;
    int final_grade;
};
int main(){
    struct test *students;
    struct test *ptr;
    int num,sum=0,grade;
    printf("input number of student = ");
    scanf("%d",&num);
    students = (struct test*) malloc (num * sizeof(struct test));
    if(students != NULL){
        for(int i=0;i<num;i++){
            ptr = &students[i];
            printf("\nstudent ID : %d",i+1);
            printf("\ninput midterm grade = ");
            scanf("%d",&grade);
            sum = ptr->min_grade = grade;
            printf("input final grade = ");
            scanf("%d",&grade);
            sum += ptr->final_grade = grade;
            printf("average grade = %.2f",sum/2.0);
        }
    }
    else 
        printf("error!\n");
    
}