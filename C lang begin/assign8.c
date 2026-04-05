#include <stdio.h>

//  odd or even
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    }
    if (num % 2 != 0) {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}