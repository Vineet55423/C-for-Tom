#include <stdio.h>
int f(int);
int f(int n){
    if(n == 0){
        return 0;
    }
    else if (n == 1 || n == 2)  
    {
        return 1;
    }
    else{
        return f(n - 1) + f(n - 2);
    }
    
}
int main()
{
    int a = 10;

   for(int i = 0; i <= a; i++){
        printf("%d, ", f(i));
   }
    return 0;
}