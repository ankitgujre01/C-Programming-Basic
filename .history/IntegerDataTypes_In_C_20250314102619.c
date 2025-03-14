#include <stdio.h>

int main() {
    unsigned int uInt = 4294967295; // Max value for unsigned int (32-bit)
    short int sInt = -32768;        // Min value for short int (16-bit)
    long int lInt = 2147483647;     // Max value for long int (32-bit)
    unsigned short int usInt = 65535; // Max value for unsigned short int (16-bit)

    printf("Unsigned int: %u\n", uInt);
    printf("Short int: %d\n", sInt);
    printf("Long int: %ld\n", lInt);
    printf("Unsigned short int: %u\n", usInt);

    return 0;
}

