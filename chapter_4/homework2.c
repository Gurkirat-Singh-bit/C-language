#include<stdio.h>
int main(){
 int n;
 printf("ENTER YOUR NUMBER :");
 scanf("%d", &n);

 int count = 0;
 for (int i = 1; i <=n; i++)
 {
    if (n % i == 0)
    {
        count++;
    }
    
 }
 if (count==2)
 {
    printf("the given number is prime ");

 }else{
    printf("the given no is not a prime number ");
 }
 


    return 0;
}