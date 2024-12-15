#include <stdio.h>

int main()
{

    int A[5] = {15, 5, 61, 4, 4};

    // Find the largest element
    int largest = A[0]; // Assume the first element is the largest
    for (int i = 1; i < 5; i++)
    {
        if (A[i] > largest)
        {
            largest = A[i]; // Update largest if a larger element is found
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);

    int smallest = A[0];
    for (int i = 0; i < 5; i++)
    {
        if (A[i] < smallest)
        {
            smallest = A[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}
