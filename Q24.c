#include<stdio.h>
int power(int i,int num)
{
    int sum=1;
    for(i;i>0;i--)
    {
        sum=sum*num;
    }
        return sum;
}
void main()
{
    int num,len,i2,num1=0;
    printf("Enter range: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        len=0;
        i2=i;
        num1=0;

        for(int j=i;j>0;j/=10) len++;
        for(int k=len; k>0;k--,i2/=10)//i2 =1234
        {
            num1=num1+power(k,i2%10);
        }
       // printf("num1: %d i: %d\n",num1,i);
        if(num1==i) printf("%d\t",i);
    }
}
