#include<stdio.h>
void main()
{
    int base, exp;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent:");
    scanf("%d",&exp);

    int result=1;
    if(exp==0)
    {
        result=0;
        printf("Result is= %d",result);
    }
    else if(exp>0)
    {
    for(int i=0;i<exp;i++)
        result=result*base;

        printf("Result is= %d",result);
    }
    else
    {
        for(int i=0;i>exp;i--)
            result=result*base;

        printf("Result is= 1/%d",result);
    }   
    
}