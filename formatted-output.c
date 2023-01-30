#include <stdio.h>

int main() {
    int a = 15;
    float x = 3.141592;
    char str[10];

    // Output variables using different specifier characters
    printf("Integer representation: %i\n", a);
    printf("Hexadecimal representation: %x\n", a);

    printf("Decimal floating point: %f\n", x);
    printf("Hexadecimal floating point: %a\n", x);

    // Output i with different width fields
    printf("Print i with width of 3 characters:%3i\n", a);
    printf("Print i with width of 9 characters:%9i\n", a);

    // Output f with different precisions
    printf("Print f with 2 decimal precision:%.2f\n", x);
    printf("Print f with 8 decimal precision:%.8f\n", x);


    return 0;
}
