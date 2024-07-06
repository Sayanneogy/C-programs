#include<stdio.h>
 void main()
 {
    int bin, weight=1;
    printf("Enter binary number:");
    scanf("%d",&bin);

    int rem,sum=0;
    while (bin!=0)
    {
        rem=bin%10;
        sum=sum+rem*weight;
        bin=bin/10;
        weight=2*weight;
    }
    printf("Decimal=%d",sum);
    
 }