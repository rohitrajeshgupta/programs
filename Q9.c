#include<stdio.h>
void main()
{
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    printf("MSB Bit: %d \tLSB Bit: %d\n",(num>>31)&1,num&1);
}
