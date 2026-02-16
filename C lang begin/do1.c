#include<stdio.h>
#define size 100
int main()
{

int a[size],i,n;
printf("Enter the limits :");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("Enter the elements of the array:");
    scanf("%d",&a[i]);
    printf("the element at postion %d is %d\n",i+1,a[i]);
}
printf("\n\n");

for(i=0;i<n;i++)

{
    printf("%d\t",a[i]);

}

return 0;
}   
