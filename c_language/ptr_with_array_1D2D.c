#include <stdio.h>
#define row 9
#define col 9
int main(){
    int table[row][col],*ptr;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d * %d = %2d ",j+1,i+1,(j+1)*(i+1));
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //------------------------wrong
            // table[row][col] = (i+1)*(j+1);
            //-------------------------------
            table[i][j] = (i+1)*(j+1);
        }    
    }
    //1-D
    ptr = &table[0][0]; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d * %d = %2d ",j+1,i+1,*(ptr+(i*col)+j));
        }
        printf("\n");
    }
        printf("\n");
    //2-D
    //--------------------------wrong
    // ptr = &table[0]; 
    //----------------------------
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //--------------------------wrong
            // printf("%d * %d = %2d ",j+1,i+1,*(*(ptr+i))+j);
            //------------------------------------
            printf("%d * %d = %2d ",j+1,i+1,*(*(table+i)+j));
        }
        printf("\n");
    }
    
}