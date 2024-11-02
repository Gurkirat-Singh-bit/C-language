#include<stdio.h>
int main(){
    char c;
    printf("ENTER YOUR CHARACTER \n");
    scanf(" %c", &c);
    if (c>= 'A' && c<='Z')
    {
        printf("the given charachter is in upper case");
    }else if (c>='a' && c<='z')
    {
        printf("the given charcter is in lower case");
    }else{
        printf("not a valid character");
    }
    return 0;
    
}