#include <stdio.h>

int main() {
    float a, b, c, d, m, n,x1, x2, deno;
    

    printf("Enter values for a, b, c, d, m, n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    deno = (a * d) - (c * b);

    if (deno !=0)
    {
       x1 = (float) ((m * d )- (b * n) )/ deno;
        x2 = (float)((n * a )- ( m * c) )/ deno;
        
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2); 
    } 
    else 
    {
        
        printf("The denominator is zero. No solution .\n");
    }

    return 0;
}