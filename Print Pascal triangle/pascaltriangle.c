#include<stdio.h>
void main()
{
    int n,row;
    printf("Enter height of triangle:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(int space=1;space<=(n-row);space++)
            printf(" ");

        int pasc=1;
        
        for(int i=1;i<=row;i++)
        {
            printf("%d ",pasc);

            pasc=pasc*(row-i)/i;
        }
        printf("\n");
    }
}