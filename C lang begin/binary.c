/*binary search in an array*/
#include<stdio.h>
int main()
{
    int a[100],n,i,low,high,mid,key;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the key element to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    printf("Element not found in the array");
    return 0;
}