#include <stdio.h>

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};

    int *ptr = &A[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *ptr);
            ptr++;
        }
        printf("\n");
    }
        return 0;
    }