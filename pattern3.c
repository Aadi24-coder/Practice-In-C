#include <stdio.h>
int main()
{
    int sp=3;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(int z=1;z<=i;z++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
    return 0;
}