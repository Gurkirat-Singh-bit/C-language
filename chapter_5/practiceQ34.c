#include<stdio.h>
int fib(int n);
int main(){
    int n;
printf("enter a number : ");
scanf("%d", &n);
    int fibo = fib(n);
    printf("the fibbonci of the %d is : %d", n,fibo);




    return 0;
}int fib(int n){
    if (n==0)
    {
        return 0;
    }if (n == 1)
    {
       return 1;
    }
    
    
    int fibN = fib(n - 1);
    int fibN2 = fib(n - 2);
    int fib = fibN + fibN2 ;
    return fib;
}