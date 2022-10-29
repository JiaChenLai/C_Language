// at home test
#include <stdio.h>
#include <stdlib.h>

void matrix_multiply(int *a, int *b, int m, int n, int p) {
  int *c;
  c = (int *)malloc(m * p * sizeof(int));
  int temp;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      temp = 0;
      for (int k = 0; k < n; k++) {
        temp += a[i * n + k] * b[k * p + j];
      }
      c[i * p + j] = temp;
    }
  }

  printf("\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("matrix[%d][%d] = %d \n", i, j, c[i * p + j]);
    }
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
  array_b = (int *)malloc(m1 * n1 * sizeof(int));
  printf("array_a size = m*n\n");
  scanf("%d%d", &m, &n);
  printf("input array value\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &array_a[i * n + j]);
    }
  }
  printf("array_b size = m*n\n");
  scanf("%d%d", &m1, &n1);
  printf("input array value\n");
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n1; j++) {
      scanf("%d", &array_b[i * n1 + j]);
    }
  }

  if (n == m1) {
    // array_added(array_a,array_b,m,n);
    matrix_multiply(array_a, array_b, m, n, n1);
  } else {
    printf("size error!=\n");
  }
}
