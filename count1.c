#include <stdio.h>
int main()
{ 
    int a;
    int c1=0;
    int c2=0;
    int c3=0;
    char ch;
    for(; ;)
    {
        printf(" enter a number ");
        scanf("%d" , &a);
        if(a>0)
        {
            c1++;
        }
        else if(a<0)
        {
            c2++;
        }
        else if(a==0)
        {
            c3++;
        }
        printf(" do you want to enter another number ?  (y/n)\n");
        scanf(" %c" , &ch);
        
        if(ch=='n' || ch=='N')
        {
            break;
        }
         
    }
    printf(" the count of positive numbers entered by the users is : %d\n" , c1);
     printf(" the count of negative numbers entered by the user is : %d\n" , c2);
      printf(" the count of zero's entered by the user  is : %d\n" , c3);
      return 0;
}

