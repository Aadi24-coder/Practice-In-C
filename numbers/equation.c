#include <stdio.h>
int main()
{
  int x;
  printf(" enter a value of x");
  scanf("%d" ,&x);
   int button;
   printf(" enter a button : ( 1 for conditon 1st , 2 for condition 2nd till 4 )\n");
   scanf("%d " , &button);
   
   switch (button)
   {
      case 1:
      printf(" equation = x+7\n");
      printf(" the value of this equation is :%d\n" , x+7);
      break;
      case 2:
      printf(" equation = x*x+3x+5\n");
      printf(" the value of this equation is : %d" , (x*x+(3*x)+5));
      break;
      default:
      printf(" wrong input ");
   }
   return 0;
}