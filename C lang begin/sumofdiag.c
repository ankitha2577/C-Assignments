// sum of diagaonal elements of a matrix
#include<stdio.h>
int main()
{
    int a[100][100],m,n,i,j,sum=0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
            
    }

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
     printf("\n\nThe diagonal elements of the matrix are:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
    } 

    printf("\n\nThe sum of the diagonal elements of the matrix is:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            
        }
        
    }
    
    printf("%d\n",sum);
}
    

    
    