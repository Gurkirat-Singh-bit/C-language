#include <stdio.h>
int fib(int count);
int main()
{
    printf("the sum of the given n is %d", fib(3));

    return 0;
}
int fib(int count)
{

    if (count == 0)
    {
        return 0;
    }
    else
    {
        return count + fib(count - 1);
    }
}
