#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("NUMBER IS EVEN\n");
    }
    else 
    {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}