#include<stdio.h>
void main()
{
    int n1=0,n2=1,n3,number;
    printf("Enter no of digit:");
    scanf("%d",&number);

    printf("%d %d",n1,n2);
    for(int i=3;i<=number;i++)
    {
        n3=n2+n1;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }
}