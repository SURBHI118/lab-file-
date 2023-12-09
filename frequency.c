
#include<stdio.h>

int frequencyDigits(int n, int d)
{

    int c = 0;
    printf("SURBHI\n");

    while (n > 0) {


        if (n % 10 == d)
            c++;

        n = n / 10;
    }

    return c;
}


int main()
{

     int count =0;
    int N = 1122322;


    int D = 2;
    count<<frequencyDigits(N,D);
    return 0;
}
