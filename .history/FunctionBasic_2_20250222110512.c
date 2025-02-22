#include<stdio.h>
void sum(float a, float b){
    float sum = a+b;
    return sum;
}
int main(){
    float a, b;
    // float result = sum(10, 20);
    printf("Enter two numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);
    float result = sum(a, b);
    
    return 0;
}