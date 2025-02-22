#include<stdio.h>
void greet(){
    printf("Hello World");
    printf("How are you?");
    return;  // return statement is optional since it is the last statement in the function declaration 
}
int main(){
    greet();
    
    return 0;
}
