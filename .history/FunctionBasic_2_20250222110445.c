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
    printf("The sum is %d", result);
    return 0;
}