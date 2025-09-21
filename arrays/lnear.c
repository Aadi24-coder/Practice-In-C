#include <stdio.h>
int main()
{
    int n;
    int b;
    int c=0;
    printf(" enter the number of elements ");
    scanf("%d",&n);
    int a[100];



    printf("enter elements in the array\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf(" enter the number to be searched \n");
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(b==a[i])
        {
        c++;
         printf("Number %d found at position %d (index %d)\n", b, i + 1, i);
        break;
        }
    }
    if(c==0)
    printf(" number is not in the array ");
    return 0;
}