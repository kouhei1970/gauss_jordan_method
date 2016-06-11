#include <stdio.h>

short matPrint(double* mat, short M, short N);

int main(){
  double m=3;
  double n=3;
  double A[9]={
    1.0,2.0,3.0,
    4.0,5.0,6.0,
    6.0,8.0,9.0
  };
  matPrint(A, m, n);




}

short matPrint(double* mat, short M, short N){
  short i,j;
  for (i=0;i<M;i++){
    for (j=0;j<N;j++){
      printf("%8.5f " ,mat[i*N+j]);
    }
    printf("\n");
  }
}

