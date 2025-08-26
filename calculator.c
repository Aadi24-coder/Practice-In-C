#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    int dif;
    int mul;
    float  div;
    printf(" enter two numbers ");
    scanf("%d%d",&a,&b);
     sum=a+b;
     mul=a*b;
     div=a%b;
     dif=a-b;
    printf(" sum of two numbers is %d\n",sum);
    printf(" difference of two numbers is %d\n",dif);
    printf(" multiplication of two numbers is %d\n",mul);
    printf("division of two numbers is %f\n",div);
    return 0;
}