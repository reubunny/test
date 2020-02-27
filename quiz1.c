/*
Reuben Chavez
2/26/20
quiz1
CSC 251
*/


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=0;
    int x=0;
    for(i;i<11;i++)
    {
        x = x +2;
    }
    printf("after loop x is %d\n",x);

    double y;
    y= (double)(x/20);
    printf("decimal value for x/20 is: %.3f\n",y);


    return EXIT_SUCCESS;
}
