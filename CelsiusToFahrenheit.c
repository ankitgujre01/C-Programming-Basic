#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Asking user for the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula to convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
