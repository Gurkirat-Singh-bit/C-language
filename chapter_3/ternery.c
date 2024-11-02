#include<stdio.h>
int main(){
    int age;
    printf("enter your age :");
    scanf("%d", &age);
    age>=18 ? printf("you are a adult") : printf("you are not adult");
    return 0;
}