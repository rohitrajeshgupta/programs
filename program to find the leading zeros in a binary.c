#include<stdio.h>
#define INT_SIZE sizeof(int)*8
void main()
{
    int num,count,msb,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    msb=1<<(INT_SIZE-1);
    count=0;
    for(i=0;i<INT_SIZE;i++)
    {
        if((num<<i)&msb)
        {
            break;
        }
        count++;
    }
    printf("Total number of leading zeros in %d is %d",num,count);

}
