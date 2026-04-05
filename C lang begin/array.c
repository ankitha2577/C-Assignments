#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("eneter the limit of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)    
    {
        scanf("%d",&a[i]);
       
    }   
    for(i=0;i<n;i++)    
    {
        
        printf("element %d is %d\n",i+1,a[i]);
    }   

    return 0;
}