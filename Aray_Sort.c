#include <stdio.h>

int main()
{
    int n = 9;
    int A[9] = {1,5,6,8,9,7,5,2,7};

        printf("ARRAY OG:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            { // Swap if elements are in wrong order
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
