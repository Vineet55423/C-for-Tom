#include <stdio.h>

int main() {
    
    int A[5] = {1,5,3,4,4};

    int *ptr = A;

    // Loop through the array using pointer
    // for (int i = 0; i < 5; i++) {
    //     // printf("%d ", *(ptr + i));  // Pointer arithmetic to access array elements

    // }
    
    for(int i = 0; i < 5; i++){
        printf("A[%d] = %d\n", i, *ptr);
        ptr++;
        
    }

    return 0;
}
