#include<stdio.h>
int main(){
int age;
printf("enter you age : ");
scanf("%d", &age);

if(age >= 18){
    printf("you are considered as adlult \n");
}else if(age>13 && age <18){
    printf("you are teenager");

}
else{
    printf("you are not adult");

}
return 0;
}