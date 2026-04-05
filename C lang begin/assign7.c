#include<stdio.h>
void main()
{
float r_cir,r_sph;
float area,volume;

printf("enter radius of circle");
scanf("%f",&r_cir);
area=3.14*r_cir*r_cir;
printf("area of circle:%f",area);
printf("enter radius of sphere");
scanf("%f",&r_sph);
volume = (4.0/3.0)*3.14*r_sph*r_sph*r_sph;
printf("volume of sphere:%f",volume);
}


