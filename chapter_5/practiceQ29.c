#include<stdio.h>
#include<math.h>
int square(int x);
int main(){
    int a;

printf("ENTER YOUR NUMBER : ");
scanf("%d", &a);
int sq = square(a);
printf("the sqaure of the given is : %d", sq);

    return 0;
}
int square(int x){
   return pow(x,2);
    
}