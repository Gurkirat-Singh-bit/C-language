// a program to check if the given number is a
// natural number.
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NO. :");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("the given no is natuiral no");
    }else
    {
        printf("the given number is not a natural no.");
    }

    return 0;
}