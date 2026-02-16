//sum of 2d matrix
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],m,n,p,q,i,j;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);

    if(m!=p || n!=q)
    {
        printf("The sum of the two matrices is not possible.");
    }
    else
    {
        printf("Enter the elements of first matrix: ");
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

        printf("\n\n");
        printf("Enter the elements of second matrix:\n ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }   
            
        
        }

        for(i=0;i<p;i++)

            {
                for(j=0;j<q;j++)
                {
                    printf("%d\t",b[i][j]);
                }  
                printf("\n"); 
                
            
            }
        printf("\n\nThe sum of the two matrices is:\n");
        for (i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\t%d ",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}