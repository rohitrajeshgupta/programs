#include<stdio.h>
void main()
{
int cnt=0;
int arr[]={1,2,3,4,5,6,7,8};
for(int i=0; arr[i] != '\0'; i++)
    {
        cnt++;
    }
printf("size is: %d",cnt);

}
