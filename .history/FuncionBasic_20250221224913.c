#include<stdio.h>
void greet(){
    printf("Hello World");
    printf("How are you?");
    return;  // return statement is optional since it is the last statement in the function declaration 
}
int main(){
    greet();  // function call is optional since it is the first statement in the main function declaration 
    printf("\n");
    greet();
    return 0;
}
