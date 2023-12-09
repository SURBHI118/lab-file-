#include<stdio.h>
int main()
{
    int n,i;
    int a[5]={1,2,3,4,5};
    int b[n];
    printf("SURBHI\n");
    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }
    printf("the first array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("the second array is :\n");
    for (i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;

}



