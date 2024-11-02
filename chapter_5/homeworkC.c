#include<stdio.h>
void temp(int n);
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d", &n);
    temp(n);

    return 0 ;

}void temp(int n){
    if (-20 <= n && 20>= n)
    {
       printf("the temprtue is cold");
    }else{
        printf("the tempreatute is hot");
    }
    

}




