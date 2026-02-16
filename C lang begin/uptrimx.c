// print upper triangle of amtrix
#include <stdio.h>  
int main()  
{  
    int a[100][100],i,j,m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: \n");

    for(i=0;i<m;i++)  
        {  
            for(j=0;j<n;j++)  
            {  
                scanf("%d",&a[i][j]);  
            }  
        } 
    printf("Upper triangle of the matrix: \n");
    for(i=0;i<m;i++)  
        {  
            for(j=0;j<n;j++)  
            {  
                if(i<=j)  
                {  
                    printf("%d ",a[i][j]);  
                }  
                else  
                {  
                    printf("  "); 
                }  
            }  
            printf("\n");
        } 
    
    
    return 0;  
}