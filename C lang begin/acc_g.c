/*determine the acceleration due to gravity T=2π√(L/g)*/
#include <stdio.h>
#define pi 3.14
int main()
{
    float T, L, g;
    printf("Enter the time period of the pendulum (T) in seconds: ");
    scanf("%f", &T);
    printf("Enter the length of the pendulum (L) in meters: ");
    scanf("%f", &L);
    
    g = (4 * pi * pi * L) / (T * T);
    
    printf("The acceleration due to gravity (g) is: %.2f m/s^2\n", g);
    
    return 0;
}