#include <stdio.h>

int main() {
    signed char sChar = -128;       // Minimum value for signed char (-128 to 127)
    unsigned char uChar = 255;      // Maximum value for unsigned char (0 to 255)

    printf("Signed char value: %d\n", sChar);
    printf("Unsigned char value: %u\n", uChar);

    printf("Signed short value: %d\n", sShort);
    printf("Unsigned short value: %u\n", uShort);

    return 0;
}
