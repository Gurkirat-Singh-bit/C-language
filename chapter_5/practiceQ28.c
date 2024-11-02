#include<stdio.h>
void printnamste(); // declartion/ prtotype
void printbonjour();
int main(){
    char c;
    printf("ENTER F IF YOU ARE FRENCH IF YOU ARE INDIAN  ENTER I \n");
    scanf("%c", &c);
if (c == 'f' || c == 'F')
{
   printbonjour(); 
   
}else if (c == 'i' || c == 'I')
{
    printnamste();
}else{
    printf("hello");
}


    return 0;
}
// function defination
void printnamste(){
    printf("namste \n");
    printbonjour();
}
void printbonjour(){
    printf("bonjour \n");

}