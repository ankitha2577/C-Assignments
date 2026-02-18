// print character string using fgets() function and fputs() function
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf(" name is  ");
    fputs(name, stdout);
    
    return 0;
}