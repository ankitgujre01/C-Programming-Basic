#include <stdio.h>

int main() {
    float area, length, breadth;
    
    printf("Enter length: \n");
   
    scanf("%f", &length);
    
    printf("Enter breadth: \n");

    scanf("%f", &breadth);
    
    area = length * breadth;
    
    printf("Area of Rectangle = %f\n", area);
    
    return 0;
}
