#include<stdio.h>

int main(){

    float radius, height;

    printf("Enter Radius:\n");
    scanf("%f", &radius);

    printf("Enter Height:\n");
    scanf("%f", &height);

    // volume of cylinder V = 3.14*r^2*h
    printf("Volume of Cylinder = %f", 3.14 * radius * radius * height);
    return 0;
}