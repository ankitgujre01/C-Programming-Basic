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