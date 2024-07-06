#include<stdio.h>
void main()
{
    int a[2][2]={{1,2},{3,4}};
    int *p;
    for(p= &a[0][0];p<=&a[1][1];p++)
    {
        printf("%d",*p);
    }
}