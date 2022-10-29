// at home test
#include <stdio.h>
#include <stdlib.h>

void matrix_transpose(int *a, int m, int n) {
    int *b;
    b = (int *) malloc (m*n*sizeof(int));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {

         b[ j*m + i] = a[i * n + j]  ;
      }
    
    }

  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
    //   printf("matrix[%d][%d] = %d ", i, j, c[i * p + j]);
      printf("%d ",b[i * m + j]);
    }
    printf("\n");
  }
}
/*
void array_added(int *a,int *b,int m,int n){
    int *c ;
    c = (int *) malloc (m*n*sizeof(int));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i*n+j] = a[i*n+j] + b[i*n+j];
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("matrix[%d][%d] = %d \n",i,j,c[i*n+j]);
        }
    }

}*/

int main() {
  int *array_a, *array_b;
  int m, n, m1, n1;
  array_a = (int *)malloc(m * n * sizeof(int));
//   array_b = (int *)malloc(m1 * n1 * sizeof(int));
  printf("array_a size = m*n\n");
  scanf("%d%d", &m, &n);
  printf("input array value\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &array_a[i * n + j]);
    }
  }
//   printf("array_b size = m*n\n");
//   scanf("%d%d", &m1, &n1);
//   printf("input array value\n");
//   for (int i = 0; i < m1; i++) {
//     for (int j = 0; j < n1; j++) {
//       scanf("%d", &array_b[i * n1 + j]);
//     }
//   }

  
    // array_added(array_a,array_b,m,n);
    matrix_transpose(array_a, m, n);
//    else {
//     printf("size error!=\n");
//   }
}
