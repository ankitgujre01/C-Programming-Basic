#include<stdio.h>
double subtract(double a, double b){
    double sub = a-b;
    return sub;
}
int main(){
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    double result = subtract(a, b);
    printf("The subtraction of %lf and %lf is %lf", a, b, result);
    return 0;
}
// Output: Enter two numbers: 10 5