
#include <stdio.h>

int main()
{
    int i, num1, num2, min, lcm=1, hcf = 1;
    printf("SURBHI\n");
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);
     min = (num1<num2) ? num1 : num2;
    for(i=1; i<=min; i++)
    {
      if(num1%i==0 && num2%i==0)
        {

        }
    }
     printf("LCM of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
