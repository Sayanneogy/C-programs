#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[100];
    strcpy(str1,"Welcome to ");
    strcpy(str2,"our academy");
    strcat(str1,str2);
    printf("%s",str1);
}