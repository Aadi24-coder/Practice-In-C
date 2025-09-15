#include <stdio.h>
int main()
{
    int sp=2;
    for(int i=1;i<=3;i++)
    { 
        for(int j=sp;j>0;j--)
        {
            printf(" ");
        }
        for(int j =1;j<=i;j++)
        {
            printf("*");
        }
        sp--;
        printf("\n");
    }
    int sp1=0;
    for(int i =2;i>0;i--)
    {
        for(int j=sp1;j>=0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        sp1++;
        printf("\n");

    }
    return 0;
}