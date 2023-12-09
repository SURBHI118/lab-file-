#include<stdio.h>
int main()
{
    int a,b,c;
    printf("SURBHI\n");
    printf("enter value of a");
    scanf("%d",&a);
    printf("\n enter value of b");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    // using a temporary variable
    // store the value of a in temporary variable
    int temp = a;
    // assign the value of b to a
    a = a+b+c;
    b = a-b-c;
    c = a-b-c;
    a = a-b-c;

    printf("\n after swapping a = %d, b = %d,c = %d", a,b,c);
    return 0 ;
}
