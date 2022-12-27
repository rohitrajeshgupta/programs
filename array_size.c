#include<stdio.h>
int main()
{
int cnt=0;
int arr[10]={1,2,3,4,5,6,2};
printf("arr: %lu\n",arr);
printf("arr+1: %lu\n",&arr+1);
int *arr1=&arr+1;
printf("diff: %d",arr1-arr);
}
