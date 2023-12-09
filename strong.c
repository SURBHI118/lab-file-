#include <stdio.h>
int main()
{
    int i, j, a, lastDigit, end;
    long long fact, sum;
    printf("SURBHI\n");
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Strong numbers between 1 to %d are:\n", end);
    {
     a = i;
       sum = 0;
         while(a > 0)
        {
            fact = 1ll;
            lastDigit =a % 10;
             for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }
              sum += fact;
           a /= 10;
        }
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
