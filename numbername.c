#include<stdio.h>
int main()
{
    int n , num;
    printf("SURBHI\n");
    printf("enter the number to print:");
    scanf("%d",&n);
    switch(n%10)
    {
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    case 3:
        printf("THREE");
        break ;
    case 4:
        printf("FOUR");
        break;
    default:
        printf("ZERO");


    }
    return 0;
}
