#include <stdio.h>

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    

    // Using sizeof operator to get the size of data types
    printf("Size of int: %zu bytes\n", sizeof(intType));                   //sizeof is also called a keyword
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    return 0;    //keyword return
}
