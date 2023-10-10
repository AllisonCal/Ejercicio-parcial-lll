#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
      int n, i, j, p, opcion=0, operacion, temp, suma=0;
      
      srand(time(NULL));
      printf("longitud de la matriz \n");
      scanf("%d", &n);
      int a[n][n], b[n][n], c[n][n];
      printf ("operacion:\n"
      "1.diagonal\n 2.resta\n 3.suma\n 4.multiplicacion \n");
      scanf("%d", &opcion);
      
      switch (opcion)
      {
            case 1:
                  printf("Matriz a\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              a[i][j] = rand () % 10 +1;
                              printf("%d ", a[i][j]);
                        }
                        printf("\n");
                  }

      for(i=0 ; i<n ; i++)
      {
            j=i;
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
            suma+= a[i][j];
            
      }
            printf ("La suma de su diagonal es: %d\n", suma);
            break;

      case 2:
                  printf("Matriz a\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              a[i][j] = rand () % 10 +1;
                              printf("%d ", a[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz b\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              b[i][j] = rand () % 10 +1;
                              printf("%d ", b[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz c\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              c[i][j]= a[i][j] - b[i][j];
                              printf("%d ", c[i][j]);
                        }
                        printf("\n");
                  }
                  break;
      case 3:
       printf("Matriz a\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              a[i][j] = rand () % 10 +1;
                              printf("%d ", a[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz b\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              b[i][j] = rand () % 10 +1;
                              printf("%d ", b[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz c\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              c[i][j]= a[i][j] + b[i][j];
                              printf("%d ", c[i][j]);
                        }
                        printf("\n");
                  }
                  break;
      case 4:
      printf("Matriz a\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              a[i][j] = rand () % 10 +1;
                              printf("%d ", a[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz b\n");
                  for (i=0; i<n; i++)
                  {
                        for(j=0; j<n; j++)
                        {
                              b[i][j] = rand () % 10 +1;
                              printf("%d ", b[i][j]);
                        }
                        printf("\n");
                  }
                  printf("Matriz c\n");
                  for (i=0; i<n; i++)
                  {
                        for (j=0; j<n; j++)
                        {
                              temp = 0;
                              for (p =0; p<n; p++)
                              {
                                    temp += a[i][p] * b[p][j];
                              }
                              c[i][j] = temp;
                              printf("%d ", c[i][j]);
                        }
                        printf("\n");
                  }
          break;
            
      }
      
      return 0;

}
