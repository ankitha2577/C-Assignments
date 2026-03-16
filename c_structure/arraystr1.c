/*write a program to declare a structure with name marks and structure members sub1,sub2,sub3 as
 integers and total marks as float .Initialize the structure variable  student with marks of three
 subjects and  total mark as 0.also declare another structure variable TOT.write a program
 to find the total marks of each subject and total mark of each student and dispaly it.
*/
#include <stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    float total;
};
struct marks student[3]={{23,24,30,0}, {15,23,20,0}, {25,26,27,0}};
struct marks TOT;
void main()
{
    int i;
     for (i = 0; i < 3; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
        printf("Student %d: Total Marks = %f\n", i + 1, student[i].total);
    }
    TOT.sub1 = student[0].sub1 + student[1].sub1 + student[2].sub1;
    TOT.sub2 = student[0].sub2 + student[1].sub2 + student[2].sub2;
    TOT.sub3 = student[0].sub3 + student[1].sub3 + student[2].sub3;
   
    printf("Total marks of each subject:\n");
    printf("Subject 1: %d\n", TOT.sub1);
    printf("Subject 2: %d\n", TOT.sub2);
    printf("Subject 3: %d\n", TOT.sub3);
   
}