#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("SURBHI\n");


    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {

        sum += i;
    }

    printf("Sum of all even number between 1 to n = %d", n, sum);

    return 0;
}


