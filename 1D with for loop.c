//using for loop print full array
#include<stdio.h>
#define n 5

int main()
{
    int i=0;

    int marks[n];//declaration of array
    marks[0]=80;//initialization of array
    marks[1]=60;
    marks[2]=70;
    marks[3]=85;
    marks[4]=75;
//traversal of array
    for(i=0; i<5; i++)
    {
        printf("%d \n",marks[i]);
    }//end of for loop

}
