#include<stdio.h>
float converttemp(float celcius);

int main(){

float far = converttemp(32);
printf("%f", far);


    return 0;

}
float converttemp(float celcius){
    int far = celcius *(9.0/5.0)+32;
    return far;
}