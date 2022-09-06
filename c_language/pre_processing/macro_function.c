#include <stdio.h>

#define TRUE 1
#define FALSE 0
#if 0
//-----------------wrong--- macro function can't receive '\n' using '\'
#define swap(a,b){ //"\"
    int temp; \
    temp = a; \
    a = b;    \
    b = temp; }
//-----------------------
#endif     
#define swap(a,b){ \
    int temp; \
    temp = a; \
    a = b;    \
    b = temp; }

#define multi(x,y) (x)*(y)
#define wrong_multi(x,y) x*y
#define plus_two(a) ((a) + 2)
#define wrong_plus_two(a) (a) + 2
//------------------------wrong---using () on operation. 
#define wrong_area(r) r*r*3.1415926
#define area(r) ((r)*(r)*3.1415926)
//---------------------------------------
#define is_even(x) x%2==0 ? TRUE : FALSE

int main(){
    int a=10,b=5,radius=10,x;
    if(is_even(a+b))
        printf("even !\n");
    else    
        printf("odd !\n");
    
    printf("original : (a,b)=(%d,%d)\n",a,b);
    swap(a,b);
    printf("After swap :(a,b)=(%d,%d)\n",a,b);
    printf("(wrong)circle area of radius %d = %.3f //r*r*3.1415926 \n",radius+1,wrong_area(radius+1));
    printf("circle area of radius %d = %.3f //((r)*(r)*3.1415926)\n",radius+1,area(radius+1));
    printf("(wrong)circle area of radius %d = %.3f //r*r*3.1415926 \n",radius+15,wrong_area(radius+15));
    printf("circle area of radius %d = %.3f //((r)*(r)*3.1415926)\n",radius+15,area(radius+15));
    printf("multi(3+2,4+2) = %d\n",multi(3+2,4+2));
    printf("wrong_multi(3+2,4+2) = %d\n",wrong_multi(3+2,4+2));
    printf("plus_two(3) *3 = %d\n",plus_two(3)*3);
    printf("wrong_plus_two(3) *3 = %d\n",wrong_plus_two(3)*3);
    
}