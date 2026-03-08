/*            MARKS & AVERAGE 
AIM:
Q:2 Write a program to read marks of three subjects out of 100 from the user.
 Use separate functions to:
a) Find the largest among the numbers using nested if.
 
b) Find the smallest among the numbers using if–else if statement.

c) Calculate the average of the marks  of the three subjects and if average is greater than
or equal to  50 assign 1 
to a variable V otherwise assign 0 to variable V(use conditional operator here) */
#include <stdio.h>
int a, b, c, V;
void largest();
void smallest();
void average();
int main()
{
    printf("Enter marks of three subjects out of 100: ");
    scanf("%d%d%d", &a, &b, &c);
    largest();
    smallest();
    average();
    return 0;
}
void largest()
{
    if (a > b )
    {
        if (a >= c)
            printf("Largest mark is: %d\n", a);
        else
            printf("Largest mark is: %d\n", c);
    }
    else
    {
        if (b >= c)
            printf("Largest mark is: %d\n", b);
        else
            printf("Largest mark is: %d\n", c);
    }
}
void smallest()
{
    if (a <= b && a <= c)
        printf("Smallest mark is: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest mark is: %d\n", b);
    else
        printf("Smallest mark is: %d\n", c);
    
}
void average()
{
    float avg = (a + b + c) / 3;
    printf("Average mark is: %f\n", avg);
    V = (avg >= 50) ? 1 : 0;
    printf("Value of V: %d\n", V);
}
/* 
OUTPUT:
       Enter marks of three subjects out of 100: 23 57 99
       Largest mark is: 99
       Smallest mark is: 23
       Average mark is: 59.000000
       Value of V: 1

RESULT: 
       The program correctly identifies the largest and smallest marks among the three subjects
using nested if and if-else if statements, respectively. The average is calculated accurately,
and the conditional operator is used effectively to assign the value of V based on whether the
average is greater than or equal to 50.Overall, the program meets the requirements specified in
 the AIM.
*/