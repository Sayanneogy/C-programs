#include<stdio.h>
 void main()
 {
    int a,b;
    printf("Enter starting range:");
    scanf("%d",&a);
    printf("Enter ending range:");
    scanf("%d",&b);
    
    
    for(int i=a;i<=b;i++)
    {
        int flag=0;
        if(i==1||i==2||i==3)
            printf("%d is prime number\n",i);
        else
        {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
            if(flag==0)
                printf("%d is prime number\n",i);
            else    
                printf("%d is not prime\n",i);
        }
    }
}