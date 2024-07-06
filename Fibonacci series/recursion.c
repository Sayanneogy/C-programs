#include<stdio.h>
int fibo(int n)
{
    int a=0,b=1,c,i;
    if(n==0)
        return a;
    else 
        {
            for(i=1;i<n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            return b;
        }
}
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
    printf("%d\t",fibo(i));
    }
}