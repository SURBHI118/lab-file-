#include<stdio.h>
int main()
{
    int a,b,c;
    printf("SURBHI\n");
    printf("enter value of a");
    scanf("%d",&a);
    printf("\n enter value of b");
    scanf("%d",&b);

    // using a temporary variable
    // store the value of a in temporary variable
    int temp = a;
    // assign the value of b to a
    a = a+b;

    b = a-b;
    a=a-b;
    printf("\n after swapping a = %d, b = %d", a,b);
    return 0 ;
}


