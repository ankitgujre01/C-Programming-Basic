#include<stdio.h>
float sum(float a, float b){
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
    printf("The sum of %f and %f is %f", a, b, result);
    return 0;
}