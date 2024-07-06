#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10]="Hello";
    char str2[10];
    char str3[10];

    strcpy(str3,strcpy(str2,str1));
    printf("%s %s",str3,str2,str1);
}