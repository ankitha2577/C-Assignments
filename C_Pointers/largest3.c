/*wap to find the largest of three numbers using pointers*/
#include<stdio.h>
void main()
{
int a, b, c;
int *p1, *p2, *p3;

p1=&a;
p2=&b;
p3=&c;

printf("Enter three numbers: ");
scanf("%d%d%d", p1, p2, p3);
// Printing the memory addresses
printf("\n--- Memory Addresses ---\n");
printf("Address of a is: %u\n", p1);
printf("Address of b is: %u\n", p2);
printf("Address of c is: %u\n\n", p3);


if(*p1 >= *p2 && *p1 >= *p3)
{
    printf("Largest number is %d\n", *p1);
}
else if(*p2 >= *p1 && *p2 >= *p3)
{
    printf("Largest number is %d\n", *p2);
}
else
{
    printf("Largest number is %d\n", *p3);
}
}