#include <stdio.h>
int main()
{
    int a;
    int r;
    int sum=0;
    printf(" enter a number ");
    scanf(" %d" , &a);
     for(int i=a;i>0;i=i/10)
     {
        r=i%10;
        sum=sum+r;
     }
     if(a%sum==0)
     {
        printf(" super number");
     }
     else
     {
        printf(" not a super number ");
     }
     return 0;
}