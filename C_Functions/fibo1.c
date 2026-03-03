// fibonacci using recursion in C
#include <stdio.h>
int fib(int );
int main() {
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
int fib(int n) {
    if (n <= 1)
    {
        return n;
    } 
    else
    {
    return fib(n - 1) + fib(n - 2);
    }
}