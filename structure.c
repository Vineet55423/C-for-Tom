#include <stdio.h>
struct student{
    int roll;
    float marks;
} s1 = {1, 68.3}, s2 = {2, 98.3};
int main()
{
printf("%d\n", s1.roll);    
printf("%.2f\n", s1.marks);   

printf("%d\n", s2.roll);    
printf("%.2f\n", s2.marks); 
    return 0;
}