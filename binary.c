#include <stdio.h>
int main()
{
    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long binary, octal, tempBinary;
    int digit, place, i;
    octal = 0;
    place= 1;
    printf("SURBHI\n");
    printf("Enter any binary number: ");
    scanf("%lld", &binary);
    tempBinary = binary;
    while(tempBinary != 0)
    {
        digit = tempBinary % 1000;
        for(i=0; i<8; i++)
        {
            if(octalConstant[i] == digit)
            {

                octal = (i * place) + octal;
                break;
            }
        }
        tempBinary /= 1000;
        place *= 10;
    }

    printf("Original binary number = %lld\n", binary);
    printf("Octal number = %lld", octal);

    return 0;
}
