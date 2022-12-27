#include<stdio.h>

int avg(int[],int);
int main()
{
    int average;

    int marks[5]= {1,2,3,4,5};
    int size=sizeof(marks)/sizeof(int);
    average=avg(marks,size);
    printf("%d",average);
}
int avg(int marks[],int a)
{
    int i,sum=0,avg1=0;
    for(i=0; i<a; i++)
    {

        sum=sum+marks[i];
    }
    avg1=sum/a;
    return avg1;
}
