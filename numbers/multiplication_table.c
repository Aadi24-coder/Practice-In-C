#include <stdio.h>
int main()
{
    int a;
    printf(" enter the number");
    scanf("%d" , &a);
    printf("multiplication number of %d\n",a);
    for(int i =1;i<=10;i++)
    {
        printf("%d*%d = %d\n ",a,i,a*i);
    }
    return 0;
}