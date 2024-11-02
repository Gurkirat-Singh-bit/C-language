#include<stdio.h>
void areacircle(int a);
void areasquare(int a);
void arearectangle(int a, int b);
int main(){


    return 0;
}
void areacircle(int a){
    int area = 3.145*a*a;
    printf("the area of cicle is : %d", area);
}
void areasquare(int a){
    int area = a*a;
    printf("the area of square is : %d", area);
}
void areacircle(int a, int b){
    int area = 2*(a+b);
    printf("the area of rectangle is : %d", area);
}