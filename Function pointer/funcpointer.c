#include<stdio.h>
# define ops 4

float sum(float a,float b){ return (a+b); }
float sub(float a,float b){ return (a-b); }
float mul(float a,float b){ return (a*b); }
float div(float a,float b){ return (a/b); }
void main()
{  
    float (*ptr2func[ops])(float,float)={sum,sub,mul,div};
    int choice;
    float a,b;
    printf("Enter your choice: 0 for sum,1 for sub, 2 for mul, 3 for div\n");
    scanf("%d",&choice);
    printf("Enter numbers:\n");
    scanf("%f %f",&a,&b);
    printf("%f",ptr2func[choice](a,b));
}