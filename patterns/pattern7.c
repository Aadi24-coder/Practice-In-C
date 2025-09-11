#include <stdio.h>
int main()
{
    int sp=4;
    for(int i =1;i<=5;i++)
    {
        for(int j =sp;j>0;j--)
        {
            printf(" ");
        }
        for(int k =1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
    return 0;
}