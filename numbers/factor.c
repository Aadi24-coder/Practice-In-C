#include <stdio.h>
int main()
{
    int f=0;
    int n;
    printf(" enter a number ");
    scanf("%d" , &n);
    printf(" factors are");
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        f=i;;
         printf(" %d\n " , f);
       }
    } 
    return 0;
}