#include <stdio.h>
int main()
{
    int sq=1;
    int sum=0;
    int a;
    printf(" enter a number ");
    scanf("%d" , &a);
    for(int i=a;i>0;i=i/10)
    {
        int rev=i%10;
        sq=rev*rev;
        sum=sum+rev;
    }
    if(sum==a)
    {
        printf(" it is a neon number ");
    }
    return 0;  // it is a exit status indicating that the programm runs successfully 
}