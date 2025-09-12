#include <stdio.h>
int main()
{
    int a;
    int l;
    int cube;
    printf(" enter a number");
    scanf("%d",&a);
    printf(" enter a limit ");
    scanf("%d",&l);
    for(int i =1;i<=l;i++)
    {
         for(int j=1;j<=l;j++)
         {
            if((i*i*i)+(j*j*j)==a)
            {
                printf("pairs are \n(%d %d)" ,i,j);
            }
        
         }
        }
    }