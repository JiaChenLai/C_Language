//302(10) = 100101110(2)
//1011(2) = 11(10) 
#include <stdio.h>

int power(int,int);
int binary_to_decimal(long);
long decimal_to_binary(int);

int main(){
    printf("302 = %d \n",decimal_to_binary(302));
    printf("1011 = %d \n",binary_to_decimal(1011));
}

//1101 -> 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
//1101 / 10 = 110 ... 1 (1) -> bit=0
//110  / 10 = 11  ... 0 (10) -> bit=1
//11   / 10 = 1   ... 1 (100) ->bit=2
//1    / 10 = 0   ... 1 (1000) ->bit=3
int binary_to_decimal(long num){
    int coefficient,bit=0,decimal=0;
    while(num>0){
    coefficient = num % 10;    
    num /= 10;
    decimal += coefficient * power(2,bit);
    bit++;
    }
    return decimal;
}

//302 -> %2's result (from right to left)
long decimal_to_binary(int num){
    int bit=0,temp=0,binary=0;
    
    while(num!=0){
    temp = num % 2 ;
    num /= 2;
    binary += temp * power(10,bit);
    bit++;
    }
    return binary;  
}

int power(int base,int x){ //base^x
	int result = 1;
	for(int i=1;i<=x;i++){
		result *= base ;
	}
	return result ;
}