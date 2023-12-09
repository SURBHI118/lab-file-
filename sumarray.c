#include<stdio.h>
int main()
{
    int i;
    int arr[]={1,2,3,4,5};
    int sum=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("SURBHI\n");
    for(i=0;i<length;i++)
    {
        sum = sum + arr[i];

    printf("sum of all array is: %d\n");

}
    return 0;
}
