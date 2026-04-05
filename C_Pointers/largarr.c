/*find the largest element in an array using pointers*/
#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE], *ptr, largest, i;
    

    printf("Enter %d elements:\n", SIZE);
    for(i=0; i<SIZE; i++)
        scanf("%d", &arr[i]);

    ptr = arr;  // ptr points to the first element of the array
    largest = *ptr;  // initialize largest with the first element

    for(i=1; i<SIZE; i++)
    {
        if(*(ptr+i) > largest)
            largest = *(ptr+i);
    }

    printf("The largest element is: %d\n", largest);
    return 0;
}