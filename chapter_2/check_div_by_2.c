#include<stdio.h>
int main(){
    int a;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &a);
    printf("%d", a%2 == 0);
    return 0;
}