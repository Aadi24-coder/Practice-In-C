#include <stdio.h>
int main()
{
    int units;
    printf(" enter number of units consumed ");
    scanf("%d", &units);
    if(units<=100)
    {
        units=5*units;
        printf("bill is :%d" , units);
    }
    else if(units>=100 || units <=200)
    {
        units =7*units;
        printf(" bill is :%d " , units);
    }
   else if(units>=200||units<=300)
    {
        units=10*units;
        printf(" bill is :%d " , units);
    }
    else 
    {
        units =12*units;
        printf(" bill is :%d " ,  units);
    }
    return 0;
}