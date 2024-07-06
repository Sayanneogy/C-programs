#include<stdio.h>

void main()
{
    int N,start,end,mid;
    float ans;
    printf("Enter an integer:");
    scanf("%d",&N);
    end=N;
    
    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*mid==N)
            ans=mid;
            break;
        
        if(mid*mid<N)
        {
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    float inc=0.1;
    for(int i=0;i<3;i++)
    {
        while(ans*ans<=N)
        {
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    
    printf("Square root of %d is:%.3f",N,ans);
}