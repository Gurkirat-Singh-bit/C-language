#include<stdio.h>
int main(){
    float mark;
    printf("ENTER YOUR marks : ");
    scanf("%f", &mark);
    if (mark<=100 && mark>= 80)
    {
        printf("GRADE A :)");
    }else if (mark<=79 && mark>=50)
    {
        printf("GRADE B \n");
    }else if (mark<=49 && mark>=35)
    {
        printf("GRADE C");
    }else if (mark<=34 && mark>=0)
    {
        printf("FAILS");
    }else{
        printf("pls enter vaild marks");
    }
    return 0;
    
    
    

}