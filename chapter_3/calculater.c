#include <stdio.h>
int main()
{
    float a, b;
    char c ;
    printf("ENTER FIRST NUMBER : ");
    scanf("%f", &a);
    printf("ENTER SECOND NUMBER :");
    scanf("%f", &b);
    printf(" | * | / | + | - |  \n");
    printf("ENTER OPERATION YOU WANT TO DO \n");
    scanf(" %c", &c);
    switch (c)
    {
    case '*':
        printf("THE PRODUCT OF GIVEN IS : %f\n
        ", a*b);
        break;
    case '/':
        printf("THE QUATIENT OF NO.1 WITH NO.2 IS : %f\n", a/b);
        break;
    case '+':
        printf("THE SUM OF BOTH NUMBERS IS : %f\n", a+b);
        break;
    case '-':
        printf("THE DIFFERNCE BETWEEN BOTH NUMBERS IS : %f \n", a-b);
        break;

    default:
    printf("PLS ENTER A VALID CARDENTIALS :(");
        break;
    }
    printf("thanks for using my calculater");
    return 0;
}