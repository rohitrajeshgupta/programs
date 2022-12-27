/*#include<stdio.h>
#define INT_SIZE sizeof(int) *8
void main()
{
    int num,count,i;
    printf("enter the number : ");
    scanf("%d",&num);
    count=0;
    for(i=0;i<INT_SIZE;i++)
    {
        if((num>>i)&1)
        {
            break;
        }
        count++;
    }
    printf("total number of trailing zeros in %d is %d ",num,count);
}*/

// USING WHILE LOOP

#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int num1=num;
    while(!(num&1))
    {
        count++;
        num>>=1;
    }
    printf("Total number of trailing zeros in %d is %d ",num1,count);
}
