#include<stdio.h>
int calculator(int a, int b){
    int sum = a+b;
    return sum;
}
int main(){
    int result = calculator(10, 20);
    printf("The sum is %d", result);
    return 0;
}