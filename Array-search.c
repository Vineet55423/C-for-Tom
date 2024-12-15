#include <stdio.h>

int main()
{
    int key, found = 0;
    int n;
    // size
    printf("Enter array size: ");
    scanf("%d", &n);

    int A[n];
    // values
    printf("Enter array values: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // result
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            printf("Value %d is at A[%d]", key, i);
             found = 1;
           break;
        }
    }

    if(!found){
        printf("this value is not in this array");
    }

   

    return 0;
}