// print string using getchar() function and putchar() function
#include <stdio.h>
int main()
{
    char h;
     printf("Enter a character: ");
     h = getchar();
     printf("The character you entered is: ");
     putchar(h);
    
    return 0;
}