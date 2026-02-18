// print character string using gets() function and puts() function
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf(" name is  ");
    puts(name);
    
    return 0;
}