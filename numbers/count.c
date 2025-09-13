#include <stdio.h>
int main()
{
    int a;
    int r;
    int c=0;
    printf(" enter a number");
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10)
    {
        r=i%10;
        c++;
    }
    printf(" the number of digits in the number is %d", c);
   return 0;
}

