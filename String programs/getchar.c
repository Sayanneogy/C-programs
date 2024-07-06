#include<stdio.h>

int input (char str[], int n)
{
    int ch,i=0;
    while((ch=getchar())!='\n')
        if(i<n)
            str[i++]=ch;
        
    str[i]='\0';
    return i;
}
void main()
{
    char str[200];
    int n=input(str,5);
    printf("%d %s",n,str);
}