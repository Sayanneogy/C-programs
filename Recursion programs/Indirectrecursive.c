//WAP to print numbers from 1 to 10 in such a 
//way that when number in odd add 1 and
// when number is even subrtact 1.
#include<stdio.h>
void odd();
void even();
int n=1;

void odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
}

void even()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
}
void main()
{
    odd();
}
