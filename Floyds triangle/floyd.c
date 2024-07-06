#include<stdio.h>
void main()
{
    int start,row;
    printf("Enter no of row:");
    scanf("%d",&row);
    printf("Enter starting element:");
    scanf("%d",&start);

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",start);
            start++;
        }
        printf("\n");
    }
}