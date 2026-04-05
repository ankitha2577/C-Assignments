/*sort a table of strings*/
#include<stdio.h>
#include<string.h>
void sort(char a[][100], int n);

int main()
{
    char a[100][100];
    int i, n;
    printf("enter the limit of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    sort(a,n);
    printf("elements of the array after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
    }
    return 0;  
}
void sort(char a[][100], int n)
{
    int i, j;
    char temp[100];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}
