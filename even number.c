#include<stdio.h>
int main()
{
    int a;
    printf("enter the num");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(a%2==0)
        {

        printf("%d",i);

        }
    }
}
