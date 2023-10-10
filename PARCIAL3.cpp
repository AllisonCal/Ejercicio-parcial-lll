#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
      int n, i, j, k, resp = 0, ope, temp, suma=0;
      
      srand(time(NULL));
      
      printf ("Elige una operacion para hacer con matices\n"
      "1=suma\t 2=resta\t 3=diagonaL\t4 =multiplicacion \n");
      scanf("%d", &resp);
      
      printf("ingrese la longitud de la matriz \n");
      scanf("%d", &n);
      int A[n][n], B[n][n], C[n][n];
      
      switch (resp)
      {
            case 1:
                  printf("Matriz A\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              A[i][j] = rand () % 10 +1;
                              printf("%d ", A[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz B\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              B[i][j] = rand () % 10 +1;
                              printf("%d ", B[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz C\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              C[i][j]= A[i][j] + B[i][j];
                              printf("%d ", C[i][j]);
                        }
                        printf("\n");
                  }
                  break;
      case 2:
                  printf("Matriz A\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              A[i][j] = rand () % 10 +1;
                              printf("%d ", A[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz B\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              B[i][j] = rand () % 10 +1;
                              printf("%d ", B[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz C\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              C[i][j]= A[i][j] - B[i][j];
                              printf("%d ", C[i][j]);
                        }
                        printf("\n");
                  }
                  break;
      case 3:
                  printf("Matriz A\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              A[i][j] = rand () % 10 +1;
                              printf("%d ", A[i][j]);
                        }
                        printf("\n");
                  }

      for(i=0 ; i<n ; i++)
      {
            j=i;
            printf("a[%d][%d] = %d\n", i, j, A[i][j]);
            suma+= A[i][j];
            
      }
      printf ("La suma de su diagonal es: %d\n", suma);
      }
      
      if(resp==4)
      {
                  printf("Matriz A\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              A[i][j] = rand () % 10 +1;
                              printf("%d ", A[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz B\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              B[i][j] = rand () % 10 +1;
                              printf("%d ", B[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz C\n");
                  for (i=0; i<n; i++)
                  {
                        for (j=0; j<n; j++)
                        {
                              temp = 0;
                              for (k =0; k<n; k++)
                              {
                                    temp += A[i][k] * B[k][j];
                              }
                              C[i][j] = temp;
                              printf("%d ", C[i][j]);
                        }
                        printf("\n");
                  }
            
            
      }
      
      return 0;

}

