#include<stdio.h>
void power(int a , int b);


int main(){
int a,b;
printf("enter you number");
scanf("%d", &a);
printf("enter power you want");
scanf("%d", &b);
power(a,b);




    return 0;
}
void power(int a ,int b){
    int value;

for ( int i = b ;i >= 0; i++)
{
    if (b== 1 || b ==0)
    {
     break;
    }
    
  value = a * a;

}
printf("answer = %d", value);
}