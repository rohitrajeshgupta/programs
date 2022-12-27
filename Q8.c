#include<stdio.h>
void main()
{
    int num1=10,num2=20;
    printf("a=%d b=%d \n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    //num1^=num2^=num1^=num2;
    printf("a=%d b=%d ",num1,num2);
}
