#include <stdio.h>
int main()
{
  int a;
  int b;
  int c=0;
  printf("enter value of a");
  scanf("%d",&a);
  printf(" enter the value of b");
  scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf(" swapped numbers are ");
   printf(" a= %d\n",a);
   printf(" b= %d\n",b);
   return 0;
}
