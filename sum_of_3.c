#include <stdio.h>
int sum(int, int, int); // function declaration or function prototype

int sum(int x, int y, int z){ //   
    return x + y + z;
}

int main()
{
    int a,b,c; 
    // int sum;
    printf("Enter three values: "); // entering a,b and c
    scanf("%d%d%d", &a, &b, &c); // reading a,b, and c

    // sum  = a + b + c; // sum of a, b and c

    printf("The sum of %d, %d and %d is %d", a, b, c, sum(a, b, c)); // print the result
    return 0; // exit the program
}