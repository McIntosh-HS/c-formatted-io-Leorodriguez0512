#include <stdio.h>

int main() {
    int a;
    char str[20];

    printf("Enter your age followed by your name: ");
    scanf("%i %s", &a, str);

    printf("Your age is: %i\n", a);
    printf("Your name is: %s\n", str);

    return 0;
}
