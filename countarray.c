#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,j,size,count=0;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the elements of first array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (arr[i] == arr[j]);
        }
        count++;
        break;
    }

     printf("\n total number  of duplicate array found in an array =%d",count);
     return 0;
}
