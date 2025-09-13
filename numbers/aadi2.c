#include <stdio.h>
int main()
{
    int a;
    int r;
    int s=0;
    printf(" enter the number to be reversed ");
    scanf("%d",&a);
    for(int i =a;i>0;i=i/10)
    {
        r=i%10; 
        s=s*10+r;
    }
    printf(" the rversed number is %d",s);
    return 0;
}
