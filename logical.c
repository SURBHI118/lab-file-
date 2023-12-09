#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("SURBHI\n");
    printf("enter the n1:");
    scanf("%f",&n1);
    printf("enter the n2:");
    scanf("%f",&n2);
    printf("enter the n3:");
    scanf("%f",&n3);
    // if n1 is greater than both n2 & n3 , n1 is the largest //
    if (n1>=n2 && n1>= n3);
    printf("%.2f is the largest integers.", n1);
    // if n2 is greater than both n1 & n2, n2 is the largest//
    if (n2>=n1 && n2>=n3);
    printf("%.2f is the largest integers",n2);
    // if n3 is greater than both n1 & n2 , n3 is the largest//
    if (n3>=n1 && n3>=n2);
    printf(" %.2f is the largest integers", n3);
    return 0 ;
}


