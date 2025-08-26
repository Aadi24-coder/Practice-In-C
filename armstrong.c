#include <stdio.h>
int main()
{
    int a;
    printf(" enter a number ");
    scanf("%d",&a);
    int r;
    int cu=1;
    int sum=0;
    for(int i=a;i>0;i=i/10)
    {
        r=i%10;
        cu=r*r*r;
        sum=sum+cu;
    }
  if(sum==a)
  {
    printf(" armstrong number ");
  }
  else 
  {
    printf(" not a armstrong number ");
  }
  return 0;
}   