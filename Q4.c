#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50];
    fgets(str1,50,stdin);
    int len=strlen(str1);
    char str2[len];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str1[i]!=' ')
        {
            str2[j++]=str1[i];
        }
    }
    str2[j]='\0';
    printf("Before : ");
    printf("%s \n",str1);
    printf("After : ");
    printf("%s ",str2);
}

/*
#include<stdio.h>
void main()
{
    char str1[]="blank spaces in the string";
    int len=strlen(str1);
    char str2[len];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str1[i]!=' ')
        {
            printf("%c",str1[i]);
        }
        else{
            continue;
        }
    }

}
*/
