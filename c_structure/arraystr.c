/*write a program to declare a structure student with members height and weight.Height as integer 
and weight declared as float and declare an array of structure variable s to store the details of 100
students.Read members height and weight for three student and display their details.*/
#include <stdio.h>
struct student
{
    int height;
    float weight;
};
struct student s[100];
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter height and weight of student %d: ", i + 1);
        scanf("%d %f", &s[i].height, &s[i].weight);
    }
    printf("\nDetails of students:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Student %d: Height = %d cm, Weight = %f kg\n", i + 1, s[i].height, s[i].weight);
    }
    return 0;
}
