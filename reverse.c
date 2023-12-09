#include <stdio.h>

int main()
{
    int i, start;

    printf("SURBHI\n");
    printf("Enter starting value: ");
    scanf("%d", &start);
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
