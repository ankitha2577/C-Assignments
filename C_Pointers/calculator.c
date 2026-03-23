/*wap to perform basic arithmetic operations of calculator (add,sub,mul,div) using pointers*/

#include<stdio.h>
void main()
{
float a, b;
float *p1, *p2;

p1=&a;
p2=&b;

printf("Enter first number: ");
scanf("%f", p1); 
printf("Enter second number: ");
scanf("%f", p2);

// Here we print the actual memory addresses stored in p1 and p2
printf("\n--- Memory Addresses ---\n");
printf("Address of a (stored in p1) is: %u\n", p1);
printf("Address of b (stored in p2) is: %u\n\n", p2);

printf("Sum is %f\n", *p1 + *p2);
printf("Subtraction is %f\n", *p1 - *p2);
printf("Multiplication is %f\n", *p1 * *p2);
if(*p2 != 0) 
{
printf("Division is %f\n", *p1 / *p2);
}
else
{
    printf("Division by zero is not allowed.\n");
}
}