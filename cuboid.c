
#include<stdio.h>

int main()
{
  float l, SA,Volume, LSA;
  printf("SURBHI\n");

  printf("\n Please Enter Length of any side of a Cube \n");
  scanf(" %f ", &l);

  SA = 6 * (l * l);
  Volume = l * l * l;
  LSA = 4 * (l * l);

  printf("\n Surface Area of Cube = %.2f", SA);
  printf("\n Volume of cube = %.2f", Volume);
  printf("\n Lateral Surface Area of Cube = %.2f", LSA);

  return 0;
}
