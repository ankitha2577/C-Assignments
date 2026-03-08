/*   Circle calculations
AIM:
The line joining the points (x1, y1) and (x2, y2) which lie on the circumference of a circle ,is the
diameter of the circle 
given,
D*D = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)
write a program to compute the Radius(R),area of the circle and perimeter of the circle using
seperate functions
use proper header files,include conceot of typecasting and use symbolic constants*/
#include <stdio.h>
#include <math.h>
#define PI 3.141
float X1,Y1,X2,Y2,D,R,A,P;
void radius();
void area();
void perimeter();
int main()
{
    printf("Enter the coordinates of the points (x1,y1) and (x2,y2): ");
    scanf("%f%f%f%f", &X1, &Y1, &X2, &Y2);
    radius();
    area();
    perimeter();
    return 0;
}
void radius()
{
    D = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    R = D / 2;
    printf("Diameter of the circle: %f\n", D);
    printf("Radius of the circle: %f\n", R);
    printf("Radius of the circle: %d\n", (int)R);
}
void area()
{
    A = PI * pow(R, 2);
    printf("Area of the circle: %f\n", A);
}
void perimeter()
{
    P = 2 * PI * R;
    printf("Perimeter of the circle: %f\n", P);
}
/*
OUTPUT:
Enter the coordinates of the points (x1,y1) and (x2,y2): 5 6 9 9
Diameter of the circle: 5.000000
Radius of the circle: 2.500000
Radius of the circle: 2
Area of the circle: 19.631250
Perimeter of the circle: 15.705000

RESULT: The program correctly calculates the diameter, radius, area, and perimeter of the circle based on the given coordinates.
 The use of functions for each calculation helps in organizing the code and improving readability. 
 The typecasting of the radius to an integer demonstrates the concept of typecasting effectively.
 */