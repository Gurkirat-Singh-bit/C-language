#include<stdio.h>
int main(){
    float length,breadth,sum;
    // declared length breadth sum variables
    printf("ENTER  LENGTH : ");
    scanf("%f", &length);
    printf("ENTER BREADTH : ");
    scanf("%f", &breadth);
    // LENGTH & BREADTH IS TAKEN FROM USER
    sum = length + breadth;
    printf("the sum of the two side of rectangle is : %f \n", sum);
    printf("the area of rectangle is : %f \n", 2*sum);
    /*these lines performs sum of both sides and then print area as well as 
    sum of both sides*/
    return 0;
    
}