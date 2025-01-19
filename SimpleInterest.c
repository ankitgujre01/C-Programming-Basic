#include<stdio.h>

int main(){
    float p, r, t;

    printf("Enter Principle:\n");
    scanf("%f", &p);
    printf("Enter Rate:\n");
    scanf("%f", &r);
    printf("Enter Time:\n");
    scanf("%f", &t);

    float SI = p*r*t;
    printf("Simple Interest = %f", SI);
    return 0;
}