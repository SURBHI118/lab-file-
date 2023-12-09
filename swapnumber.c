#include <stdio.h>
#include <math.h>
int main()
{
    int n,firstDigit, lastDigit,digits,t, swappedNum;
    printf("SURBHI\n");
    printf("Enter number = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digits - 1
    digits    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digits));
    swappedNum  = lastDigit;
    int temp = t;
    t=firstDigit;
    firstDigit = lastDigit;
    lastDigit = t;

    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}

