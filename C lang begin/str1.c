// printing characters of a string
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf(" name is  %s", name);


    return 0;
}