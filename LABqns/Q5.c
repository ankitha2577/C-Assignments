/*
AIM:
Develop a program that will read and store the details of a list of students in the format
Roll number      Name      Marks obtained
and produce the following outputs:
a)alphabetical list of names,roll numbers and marks obtained
b)list of sorted roll numbers
c)list of sorted marks obtained(rank-wise list)
*/
#include <stdio.h>
#include <string.h>
void display();
void sortByName();
void sortByRoll();
void sortByMarks();
int main()
{
    int roll[100], marks[100], n, i;
    char name[100][100];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter roll number, name and marks of student %d: ", i + 1);
        scanf("%d %s %d", &roll[i], name[i], &marks[i]);
    }
    display(roll, name, marks, n);
    sortByName(roll, name, marks, n);
    sortByRoll(roll, name, marks, n);
    sortByMarks(roll, name, marks, n);
    return 0;
}
void display(int roll[], char name[100][100], int marks[], int n)
{
    printf("\nRoll Number\tName\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", roll[i], name[i], marks[i]);
    }
}
// Function to sort by alphabetical order of names
void sortByName(int roll[], char name[100][100], int marks[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                // Swap names
                char tempName[100];
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
                // Swap roll numbers
                int tempRoll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = tempRoll;
                // Swap marks
                int tempMarks = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = tempMarks;
            }
        }
    }
    printf("\nSorted by Name:\n");
    display(roll, name, marks, n);
}
// Function to sort by roll numbers
void sortByRoll(int roll[], char name[100][100], int marks[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (roll[j] > roll[j + 1])
            {
                // Swap roll numbers
                int tempRoll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = tempRoll;
                // Swap names
                char tempName[100];
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
                // Swap marks
                int tempMarks = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = tempMarks;
            }
        }
    }
    printf("\nSorted by Roll Number:\n");
    display(roll, name, marks, n);
}
// Function to sort by marks obtained (rank-wise)
void sortByMarks(int roll[], char name[100][100], int marks[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] < marks[j + 1])
            {
                // Swap marks
                int tempMarks = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = tempMarks;
                // Swap names
                char tempName[100];
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
                // Swap roll numbers
                int tempRoll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = tempRoll;
            }
        }
    }
    printf("\nSorted by Marks (Rank-wise):\n");
    display(roll, name, marks, n);
}
/*
OUTPUT:
Enter the number of students: 4
Enter roll number, name and marks of student 1: 2 annie 13
Enter roll number, name and marks of student 2: 3 rose  14
Enter roll number, name and marks of student 3: 1 abin  12
Enter roll number, name and marks of student 4: 4 sia  13

Roll Number     Name    Marks
2               annie           13
3               rose            14
1               abin            12
4               sia             13

Sorted by Name:

Roll Number     Name    Marks
1               abin            12
2               annie           13
3               rose            14
4               sia             13

Sorted by Roll Number:

Roll Number     Name    Marks
1               abin            12
2               annie           13
3               rose            14
4               sia             13

Sorted by Marks (Rank-wise):

Roll Number     Name    Marks
3               rose            14
2               annie           13
4               sia             13
1               abin            12

RESULT:
The program successfully reads and stores the details of students, and produces the required
 outputs sorted by name, roll number, and marks obtained.
*/