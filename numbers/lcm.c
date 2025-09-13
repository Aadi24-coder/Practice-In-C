#include <stdio.h>
int main()
{
    int a;
    int b;
    int i=1;
    printf(" enter two numbers \n");
    scanf(" %d %d " , &a , &b);
        while(i%a && i%b && i>0)
        {
            printf(" lcm of two numbers (a,b) is %d" , i);
            i++;
        }
    }
