#include <stdio.h>
int main()
{
    int a=2;
    int b=3;
    float sum=0;
    int n;
    printf(" enter a number ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
       sum=sum+((float)a/b);
       a=a+2;
       b=b+4;
    }
    printf(" the sum of of this series is %.2f" ,sum);
    return 0;
}