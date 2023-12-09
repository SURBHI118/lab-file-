#include <stdio.h>
int main() {
   float pie = 3.14;
   int radius;
   printf("SURBHI\n");
   printf("Enter The Radius of Circle:");
   scanf("%d",&radius);
   printf("The radius of the circle is %d\n" , radius);
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %f", area);
   return 0;
}
