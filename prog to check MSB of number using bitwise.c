#include<stdio.h>
#define BITS sizeof(int)*8
void main()
{
    int num,msb;
    printf("Enter the number : ");
    scanf("%d",num);
    msb=1<<(BITS-1);
    if(num&msb)
        printf("MSB of number is set(1)",num);
    else
        printf("MSB of number is not set(0)",num);
}
