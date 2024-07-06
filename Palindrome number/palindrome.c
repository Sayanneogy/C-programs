#include<stdio.h>
void main()
{
    int n,r,sum=0,original;
    printf("Enter number:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    if(sum==original)
        printf("%d is palindrome number",original);
    else
        printf("%d is not palindrome number",original);
}