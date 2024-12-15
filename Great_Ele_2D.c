#include <stdio.h>

int main()
{
    int A[2][2] = {{1, 2}, {31, 4}};

    // Find the greatest element in each row
    printf("The greatest elements in each row are:\n");
    for (int i = 0; i < 2; i++)
    {
        int max = A[i][0]; // Assume the first element in the row is the largest
        for (int j = 1; j < 2; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j]; // Update max if a larger element is found
            }
        }
        printf("Row %d: %d\n", i + 1, max);
    }

    return 0;
}
