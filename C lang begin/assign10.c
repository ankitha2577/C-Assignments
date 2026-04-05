#include <stdio.h>

int main() {
    int i, count = 0, sum = 0;

    printf("Integers between 100 and 200 divisible by 7:\n");

    
    for(i = 101; i < 200; i=i+1)
 {
        if(i % 7 == 0) 
        {
            printf("%d ", i);
            count +=1;
            sum += i;
        }
    }

    printf("\nTotal Count: %d\n", count);
    printf("Total Sum: %d\n", sum);

    return 0;
}