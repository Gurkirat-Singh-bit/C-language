#include <stdio.h>
int main()
{
    int n;
    printf("ENTER YOUR NUMBER :");
    scanf("%d", &n);
    int sum = 0;

    for (int  j = n;j>=0;j--)
    {
        sum = sum + j;
        printf("%d \n", j);
    }
    printf("sum is %d", sum);
    // for (int j = n; j >= 0; j--)
    // {
    //     printf("%d \n", j);
    // }

    return 0;
}