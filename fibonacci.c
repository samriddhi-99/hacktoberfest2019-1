#include <stdio.h>

// Fibonacci Series using Recursion
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

//Tested progam
int main()
{
    int n = 9;
    printf("%d", fib(n));
    getchar();
    return 0;
}
