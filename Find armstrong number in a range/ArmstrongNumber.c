#include <stdio.h>
void main()
{
    int a,b,n,count,R=1,r,Sum=0;
    printf("Enter Start Range:");
    scanf("%d",&a);
    printf("Enter End range:");
    scanf("%d",&b);

    for(int j=a;j<=b;j++)
    {
    count=0;
    n=j;
    while(n!=0)
    {
        count++;
        n=n/10;    
    }

    n=j;
    Sum=0;
    while (n!=0)
    {
        R=1;
        r=n%10;
        for(int i=0;i<count;i++)
            R=R*r;
        
        Sum=Sum+R;
        n=n/10;
    }
    if(Sum==j)
        printf("%d is armstrong number\n",j);
}
}