#include <stdio.h>

short matPrint(double* mat, short M, short N);

int main()
{
  short m=3;
  short n=3;
  double A[9]=
  {
    1.0,2.0,3.0,
    4.0,5.0,6.0,
    6.0,8.0,9.0
  };
  short i,j,k;
  double num,den;
  matPrint(A, m, n);

  for (i=0; i<m; i++)
  {
    for (j=i+1; j<m; j++)
    {
      num=A[j*n+i];
      den=A[i*n+i];
      for (k=i; k<n; k++)
      {
        //printf("j=%d,i=%d,%f/%f\n", j,i,num, den);
        A[j*n+k] = A[j*n+k] -  A[i*n+k] * num/den;
      }
      //matPrint(A, m, n);
    }
  }
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
  printf("\n");
}

