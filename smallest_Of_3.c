#include <stdio.h>

int main()
{
    int a = 55,b = 16, c = 8;

    if(a > b && a > c){
        printf("a is greater.\n");
    }
    else if(b > a && b > c){
        printf("b is greater.\n");
    }
    else if(c > a && c > b){
        printf("c is greater.\n");
    }
    return 0;
}