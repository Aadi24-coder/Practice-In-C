#include <stdio.h>
int main()
{
    int sp=5,a=1;
    for(int i =1;i<=5;i++)
    {
        for(int z=1;z<sp;z++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n ");
        sp--;
    }

    return 0;
}