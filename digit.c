#include<stdio.h>
int main()
{
    int n,lowerdigit,upperdigit,sum=0;
    printf("SURBHI\n");
    printf("enter any digit:");
    scanf("%d",&n);
    upperdigit = n/10;
    printf("upper digit=%d",upperdigit);
   lowerdigit = n%10;
   printf("lower digit=%d",lowerdigit);
   return 0;
}

