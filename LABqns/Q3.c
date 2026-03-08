/*      
AIM:
write a programme to evaluate the following functions to 0.0001% accuracy:
a) sin(x) = x - x^3/3! + x^5/5! - x^7/7! + .....
b) cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + .....
c) SUM 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + .... + (1/n)^n
*/
#include <stdio.h>
#include <math.h>
 void findsine(float x);
 void findcosine(float x);
 void sum();
    int main()
    {
        float x;
        printf("Enter the value of angle (in radians): ");
        scanf("%f", &x);
        findsine(x);
        findcosine(x);
        sum();
        return 0;
    }
    void findsine(float x)
    {
        float term = x; // First term of the series
        float sum = x; // Initialize sum with the first term
        int i = 1; // Start with the first term
        while (fabs(term) >= 0.000001) // Continue until the term is less than 0.0001%
        // fabs is used to get the absolute value of the term
        {
             
            term = -term * (x * x) / ((2*i) * (2*i + 1)); // Calculate the next term
            sum += term; // Add the next term to the sum
            i++; // Move to the next term

         }
        printf("sin(%f) = %f\n", x, sum);
    }

    void findcosine(float x)
    {
        float term = 1; // First term of the series
        float sum = 1; // Initialize sum with the first term
        int i = 0; // Start with the first term
        while (fabs(term) >= 0.000001) // Continue until the term is less than 0.0001%
        {
            i =i+2; // Move to the next term (even terms for cosine)
            term = -term * (x * x) / (i*(i-1)); // Calculate the next term
            sum += term; // Add the next term to the sum
            
        }
        printf("cos(%f) = %f\n", x, sum);
    } 
    void sum()
    {
        int n;
        printf("Enter the value of n:\n ");
        scanf("%d", &n);
        double result = 0; // Initialize result to store the sum
        for (int i = 1; i <= n; i++)
        {
            result += pow((double)1/i, i); // Calculate (1/n)^n and add to the result
        }
        printf("SUM = %lf\n", result);
    }
/*
OUTPUT:
Enter the value of angle (in radians): 1
sin(1.000000) = 0.841471
cos(1.000000) = 0.540302
Enter the value of n: 5
SUM = 1.291263
RESULT:
       The program correctly calculates the sine and cosine of the given angle using their
        respective series expansions, and also computes the sum of the 
        series 1 + (1/2)^2 + (1/3)^3 + ... + (1/n)^n. The use of a while loop to calculate terms 
        until they are less than 0.0001% ensures that the results are accurate to the required 
        precision. The program also demonstrates the use of the math library for power
        calculations and absolute value.
*/