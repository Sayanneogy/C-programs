#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],R[20][20];
    int arows,acolumn,brows,bcolumn;
    int i,j,k;
    int sum=0;

    printf("Enter rows and column of matrix A:\n");
    scanf("%d %d",&arows,&acolumn);

    printf("Enter element of A matrix:\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumn;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter rows and column of matrix B=\n");
    scanf("%d %d",&brows,&bcolumn);
    if(acolumn!=brows)
        printf("This multiplication is not possible");
    else
    {
        printf("Enter element of matrix B:\n");
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcolumn;j++)
            scanf("%d",&b[i][j]);
    }
    }
    printf("\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            for(k=0;k<brows;k++)
                sum+=a[i][k]*b[k][j];
            R[i][j]=sum;
            sum=0;
        }
    }
    printf("Result matrix is:\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            printf("%d\t",R[i][j]);
        }
        printf("\n");

    }
}