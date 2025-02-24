#include <stdio.h>

int main() {
    int num;
    unsigned long long prev1 = 0, prev2 = 1;  // Use 'unsigned long long' for large numbers

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%llu  ", prev1);

        unsigned long long c = prev1 + prev2; 
        prev1 = prev2;
        prev2 = c;
    }

    return 0;
}
