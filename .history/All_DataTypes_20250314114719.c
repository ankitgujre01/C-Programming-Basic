#include <stdio.h>

int main() {
    // Integer types
    short int sInt = -32768;
    unsigned short int usInt = 65535;
    unsigned int uInt = 4294967295;
    int nInt = -2147483648;
    long int lInt = 2147483647;
    unsigned long int ulInt = 4294967295;
    long long int llInt = 9223372036854775807;
    unsigned long long int ullInt = 18446744073709551615U;

    // Character types
    signed char sChar = -128;
    unsigned char uChar = 255;

    // Floating point types
    float fNum = 3.14159f;
    double dNum = 3.141592653589793;
    long double ldNum = 3.141592653589793238L;

    // Printing values with proper format specifiers
    printf("short int: %hd\n", sInt);
    printf("unsigned short int: %hu\n", usInt);
    printf("unsigned int: %u\n", uInt);
    printf("int: %d\n", nInt);
    printf("long int: %ld\n", lInt);
    printf("unsigned long int: %lu\n", ulInt);
    printf("long long int: %lld\n", llInt);
    printf("unsigned long long int: %llu\n", ullInt);

    printf("signed char: %c (%d)\n", sChar, sChar); // Printing char as int too
    printf("unsigned char: %c (%d)\n", uChar, uChar);

    printf("float: %f\n", fNum);
    printf("double: %lf\n", dNum);
    printf("long double: %Lf\n", ldNum);

    // Printing sizes of data types
    printf("Size of short int: %d bytes\n", sizeof(short int));
    printf("Size of unsigned short int: %d bytes\n", sizeof(unsigned short int));
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of long int: %d bytes\n", sizeof(long int));
    printf("Size of unsigned long int: %d bytes\n", sizeof(unsigned long int));
    printf("Size of long long int: %d bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %d bytes\n", sizeof(unsigned long long int));
    return 0;
}
