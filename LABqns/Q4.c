/*
AIM:
write a c program using function to read an m*n matrix and find all saddle points and to find
 second largest element without sorting. */
#include <stdio.h>
void readMatrix(int mat[100][100], int m, int n);
void secondLargest(int mat[100][100], int m, int n);

int main()
{
    int mat[100][100], m, n,i, j;
    printf("Enter the dimensions of the matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            scanf("%d", &mat[i][j]);
        }
    }
    readMatrix(mat, m, n);
    secondLargest(mat, m, n);
    return 0;
}
void readMatrix(int mat[100][100], int m, int n)
{
    int i, j, k;
    int foundSP = 0;
    printf("\nSaddle points in the matrix:\n");
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            int SP = 1;
            // Check if the current element is the minimum in its row
            for (k = 0; k < n; k++)
             {
                if (mat[i][k] < mat[i][j]) 
                {
                    SP = 0;
                    break;
                }
            }
            // Check if the current element is the maximum in its column
            if(SP==1) 
            {
                for (k = 0; k < m; k++) 
              {
                if (mat[k][j] > mat[i][j]) 
                {
                    SP = 0;
                    break;
                }
              }
           }
            if (SP==1) 
            {
                printf("Saddle point found at (%d, %d): %d\n", i, j, mat[i][j]);
                foundSP = 1;
            }
           
        }
    }
    if (foundSP==0)
    {
        printf("\n No saddle point found.\n");
    }
}
void secondLargest(int mat[100][100], int m, int n)
{
    int i, j;
    int largest = mat[0][0];
    int secondLargest = mat[0][0];
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            if (mat[i][j] > largest) 
            {
                secondLargest = largest;
                largest = mat[i][j];
            } 
            else if ( mat[i][j] != largest && (secondLargest == largest || mat[i][j] > secondLargest)) 
            {
                secondLargest = mat[i][j];
            }
        }
    }
    printf("\nSecond largest element in the matrix: %d\n", secondLargest);
}
/* 
OUTPUT:
Enter the dimensions of the matrix (m n): 2 2
Enter the elements of the matrix:
2 4 78 67

Saddle points in the matrix:
Saddle point found at (1, 1): 67

Second largest element in the matrix: 67
RESULT:
       The program correctly identifies the saddle point and the second largest element in the 
       matrix.

*/
