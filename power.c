
#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    printf("SURBHI\n");

    printf("Enter the Base & Exponent values:\n");
    scanf("%d%d", &base, &exponent);


    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("\nResult: %d^%d = %d\n", base, exponent, result);
    return 0;
}
