/*rank list of students using structures*/
#include<stdio.h>
struct student
{
    char name[20];
    int marks;
    int rank;
};
int main()
{
    struct student s[5], temp;
    int i, j;
    printf("Enter the name and marks of 5 students:\n");
    for(i=0; i<5; i++)
    {
        printf("Student %d: ", i+1);
        scanf("%s %d", s[i].name, &s[i].marks);
    }
    // sorting the students based on marks
    for(i=0; i<5; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(s[j].marks < s[j+1].marks)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    // assigning ranks
    for(i=0; i<5; i++)
    {
        s[i].rank = i + 1;
    }
    // printing the rank list
    printf("\nRank List:\n");
    printf("Rank\tName\tMarks\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t%s\t%d\n", s[i].rank, s[i].name, s[i].marks);
    }
    return 0;
}