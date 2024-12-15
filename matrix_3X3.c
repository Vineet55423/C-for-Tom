#include <stdio.h>

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    int B[3][3] = {{8, 6, 5}, {2, 5, 6}, {5, 2, 3}};
  int C[3][3] = {0};
    printf("MATRIX A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX B: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
  // product concept
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
  // product print
    printf("Product: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}