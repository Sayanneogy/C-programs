#include<stdio.h>
 
void main() 
{
    int n,i,j,k;
    printf("Enter length:");
    scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                for(k=(n-1);k>i;k--)
                    printf(" ");

                    printf("*");

                for(k=0;k<(i*2-1);k++)
                    printf(" ");

                    if(i==0)
                        printf("\n");
                    else 
                        printf("*\n");
                     
            }
            

        for(i=(n-1);i>=1;i--)
        {
            for(k=n;k>i;k--)
            printf(" ");

            printf("*");

            for(k=1;k<(i-1)*2;k++)
                printf(" ");

            if(i==1)
                printf("");
            else    
                printf("*\n");
        }   
}