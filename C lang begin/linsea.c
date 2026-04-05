/*linear search and largest element in an array*/
#include<stdio.h>
int main()
{
    int a[100],n,i,key,largest;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the key element to be searched:");
    scanf("%d",&key);
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];
        if(a[i]==key)
        {
            printf("Element found at position %d\n",i+1);
        }
    }
    printf("Largest element in the array is %d",largest);
    return 0;
}