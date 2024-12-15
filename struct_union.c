#include <stdio.h>
struct student{
    int roll;
    float marks;
} s1 = {1, 68.3}, s2 = {2, 98.3};

union data
    {
        int rolls;
        float mark;
    };
int main()
{
    union data d1;
    d1.rolls = 5;
    d1.mark = 68.3;
    
    
printf("%d\n", d1.rolls);    
printf("%.2f\n", d1.mark);    

printf("%d\n", s1.roll);    
printf("%.2f\n", s1.marks);   

printf("%d\n", s2.roll);    
printf("%.2f\n", s2.marks);    
// printf("%d and %d", s2.roll, s2.marks);    
    return 0;
}