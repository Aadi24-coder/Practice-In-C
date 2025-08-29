#include <stdio.h>
int main()
{
    int h;
    int b;
    int p;
    printf(" enter the sides of triangle ");
    scanf("%d %d %d" , &h,&b,&p);
    if(h+b>p||b+p>h||h+p>b)
    {
        printf(" triangle is possible \n ");
        if( h==b&&b==p)
        {
            printf(" triangle is equilateral");
        }
        else if(h==b||b==p||h==p)
        {
            printf(" triangle is isoceles");
        }
        else if( h!=b&&b!=p&&h!=p)
        {
            printf(" triangle is scalene ");
        }
        else if(h*h==((b*b)+(p*p))||b*b==(h*h+p*p)|| p*p==(h*h+b*b))
        {
            printf(" triangle is right angled");
        }
        
    }
    else 
    {
        printf(" triangle is not possible ");
    }
    return 0;
}