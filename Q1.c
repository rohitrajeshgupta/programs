#include<stdio.h>
void main()
{
    char digit;
    printf("Enter the character : ");
    scanf("%c",&digit);
    if(digit=='1' || digit=='0')
    printf("Entered character is digit ");
    else
    printf("Entered character is not digit ");
}
