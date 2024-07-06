#include<stdio.h>
void main()
 {
    int n,orignal;
    printf("Enter a number:");
    scanf("%d",&n);
    orignal=n;

    int t,r,fact=1,sum=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        fact=1;
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
        printf("sum=%d\n",sum);
        if(orignal==sum)
            printf("%d is strong number",orignal);
        else    
            printf("%d is not strong number",orignal);
 }