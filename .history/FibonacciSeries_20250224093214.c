#include <stdio.h>

int main() {
    int num;
    long prev1 = 0,prev2 = 1;
    printf("enter number: ");
    scanf("%d", &num);
for(int i = 0; i<=num; i++){
    printf("%llu  ", prev1);
    long c = prev1+prev2;
    prev1 = prev2;
    prev2 = c;
}
    return 0;
}