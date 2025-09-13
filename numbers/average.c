#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int avg=0;
    printf(" enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf(" the average of 3 numbers is ");
    printf("%d",avg);
    return 0;

}