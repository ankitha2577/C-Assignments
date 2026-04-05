#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n;
    printf("enter the limit of row and column\n");
    scanf("%d %d",&m,&n);
    printf("\nenter the elements of the matrix\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
       
    }
     printf("\norignal matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }   
        printf("\ntranspose of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
            
        }
        printf("\n");
    }
            
       
    return 0;
}