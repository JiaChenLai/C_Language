#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COMPARE(x,y) ((x<y)?-1:(x==y)?0:1)
#define maxsize 100

typedef struct 
{
    /* data */
    int coef ; 
    int exp ;
}Nonzeroterm;

typedef struct 
{
    /* number of nonzero */
    int count ; 
    Nonzeroterm terms[maxsize];
}Polynomial;

int main()
{
    Polynomial a,b,c;
    a.count = 0;
    attach(&a,3,5);
    attach(&a,8,4);
    attach(&a,-6,2);
    attach(&a,5,0);

    b.count = 0;
    attach(&b,2,6);
    attach(&b,4,2);
    attach(&b,1,0);

    poly_addtion(&a,&b,&c);

    printf("nonzero terms = %d \n",c.count);
    for(int i=0;i<c.count;i++){
        printf("%d th nonzero term coef = %d , exp = %d \n",i+1,c.terms[i].coef,c.terms[i].exp);
    }
}

//attach nonzero terms 
attach (Polynomial *ptr , int coef ,int exp){
    if(ptr->count >= maxsize) return;
    ptr->terms[ptr->count].coef = coef;
    ptr->terms[ptr->count].exp = exp;
    ptr->count++; 
}

poly_addtion (Polynomial *a,Polynomial *b,Polynomial *c){
    int currentA=0,currentB = 0;
    c->count = 0;

    while (currentA < a->count && currentB < b->count){
        switch (COMPARE(a->terms[currentA].exp,b->terms[currentB].exp))
        {
            case 1:
                /*a.exp > b.exp*/
                attach(c,a->terms[currentA].coef,a->terms[currentA].exp);
                currentA++;
                break;
            case -1:
                /*a.exp < b.exp*/
                attach(c,b->terms[currentB].coef,b->terms[currentB].exp);
                currentB++;
                break;
            case 0:
                /*a.exp = b.exp*/
                if(a->terms[currentA].coef + b->terms[currentB].coef !=0)
                attach(c,a->terms[currentA].coef + b->terms[currentB].coef,a->terms[currentA].exp);
                currentA++;
                currentB++;
                break;
        
        }
    }
    while(currentA < a->count){
        attach(c,a->terms[currentA].coef,a->terms[currentA].exp);
        currentA++;
    }
    while(currentB < b->count){
        attach(c,b->terms[currentB].coef,b->terms[currentB].exp);
        currentB++;
    }    
    
    
}
