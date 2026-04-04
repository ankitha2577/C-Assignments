#include <stdio.h>

int main() {
   
    char operator;
    
  
    float num1, num2, result;

   
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    
    printf("Enter two numbers (separated by a space): ");
    scanf("%f %f", &num1, &num2);

    printf("\n--- Calculation ---\n");

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, result);
            break; 
            result = num1 - num2;
            printf("%f - %f = %f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;

        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%f / %f = %f\n", num1, num2, result);
            } else {
                printf("Error! You cannot divide a number by zero.\n");
            }
            break;

        default:
         
            printf("Error! '%c' is not a valid operator.\n", operator);
    }

    return 0; 
}