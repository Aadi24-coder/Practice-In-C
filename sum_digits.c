#include <stdio.h>
int main()
{
    int a;
    int r;
    int sum=0;
    printf(" enter a number");
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+r;
    }
    printf(" the sum of digits is%d :" , sum);
    return 0;
}
