#include<stdio.h>
void main()
{
    int n, original;
    printf("Enter number:");
    scanf("%d",&n);
    original=n;

    int sum=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(original==sum)
        printf("%d is perfect number",original);
    else    
        printf("%d is not perfect number",original);
    
}