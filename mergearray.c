#include<stdio.h>
int main()
{
    int n,i;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[n];

    printf("SURBHI\n");
    printf("enter number of first array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[5]);
    }

    printf("enter number of second array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[5]);
    }

    printf("enter the elements after merging:\n");
    for(i=0;i<5;i++)
    {
        c[n]=a[i];

        c[n+5]=b[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d",c[n]);

    }
    return 0;
}
