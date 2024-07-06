#include<stdio.h>
void main()
{
    int x,y,sum,carry;
    printf("Enter two number:");
    scanf("%d %d",&x,&y);
    while(y!=0)
    {
        sum=x^y;
        carry=(x&y)<<1;
        x=sum;
        y=carry;
    }
    printf("Sum= %d",x);
}