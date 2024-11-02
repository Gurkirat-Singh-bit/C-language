#include<stdio.h>
int main(){
    int no;
    printf("enter your no :");
    scanf("%d", &no);

    if(no>=0){
        printf("the given no is positive");
        if ( no % 2 == 0)
        {
            printf("as well ase even number");
        }
        
    }else{
        printf("the given no is either invalid or negative number");

    }
    return 0;
}