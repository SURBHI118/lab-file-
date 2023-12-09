#include<stdio.h>
int main()
{
    int n,reversed=0,original,remainder;
    printf("SURBHI\n");
    printf("enter the integer");
    scanf("%d",&n);
    original=n;
    //reversed number is stored in reversed variable
    while(n!=0)
    {
        remainder=n % 10;
        reversed = reversed *10+remainder;
        n/=10;
    }
    //Palindrome if original and reversed are equal
    if (original==reversed)
        printf("%d is a palindrome.",original);
    else
        printf("%d is not a palindrome.",original);
    return 0;
}
