//1D-array
#include <Stdio.h>
#include <stdlib.h>

int array_traverse(int *A,int n){
    
    for(int i=0;i<n;i++){
        printf("%d",*(A+i));
        printf("\n");
    }
}
int array_insert(int *a,int n,int x,int value){
    if(x<0||x>n) return -1;
    for(int i=n;i>x;i--){
        *(a+i) = *(a+i-1); 
    }
    *(a+x) = value;
    // printf("%d\n",*(a+1));

    // for(int i=0;i<n+1;i++){
    //     printf("%d",*(a+i));
    //     printf("\n");
    // }
}
int array_delete(int *a,int n,int index){
    
    for(int i=index;i<n;i++){
        *(a+i) = *(a+i+1); 
    }
}
int main(){
    printf("enter array of size\n");
    int n;
    scanf("%d",&n);
    int *array = (int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    array_traverse(array,n);
    
    printf("enter insert index\n");
    int insert_index;
    scanf("%d",&insert_index);
    
    printf("enter insert value\n");
    int insert_value ;
    scanf("%d",&insert_value);
    array_insert(array,n,insert_index,insert_value);
    printf("\n");
    array_traverse(array,n+1);
    int delete_index;
    printf("enter delete index\n");
    scanf("%d",&delete_index);
    array_delete(array,n,delete_index);
    printf("\n");
    array_traverse(array,n);
    
}

