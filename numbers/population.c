#include <stdio.h>
int main()
{
    double rate;
    int population=100000;
    printf(" population at the end of each year from the last decade is\n ");
    for(int i =1;i<=10;i++)
    {
        rate=(10*population)/100;
        population=population+rate;
        printf("%d\n", population);
    }
    return 0;
}