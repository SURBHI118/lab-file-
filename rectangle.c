#include<stdio.h>
int main()
{
    float length,breadth, area;
    printf("\n Enter the length of rectangle");
    scanf("%f",&length);
    printf("\n Enter the breadth of rectangle");
    scanf("%f",&breadth);
    area= length*breadth;
    printf(" Area of rectangle is %f",area);
    return 0;

}
