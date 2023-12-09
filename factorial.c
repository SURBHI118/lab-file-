
#include <stdio.h>
 unsigned int factorial(unsigned int n)
{
    int result = 1, i;
    printf("SURBHI\n");
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
 int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
