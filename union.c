#include <stdio.h>
union student{
    int roll;
    float marks;
};
int main()
{
    union student s1;
    s1.roll = 1;
    s1.marks = 56;

    printf("%d\n", s1.roll);
    printf("%.2f", s1.marks);
    
    return 0;
}