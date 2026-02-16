// multipilcation of two MATRICES
#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    // Initialize the result matrix c to zero
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
        }
    }
    // Multiply a and b, store the result in c
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
    printf("Result of matrix multiplication:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
