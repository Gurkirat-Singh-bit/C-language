#include<stdio.h>

int main(){
    float radius,area;
    printf("ENTER THE RADIUS OF CIRCLE : ");
    scanf("%f", &radius);
     area = 3.14*radius*radius;
    printf("THE AREA OF CIRCLE IS : %f", area);
    return 0;
}