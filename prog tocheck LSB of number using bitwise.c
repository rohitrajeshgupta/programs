#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num&1)
        printf("LSB of number is set (1) ",num);
    else
        printf("LSB of number is clear (0) ",num);
}
