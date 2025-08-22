#include <stdio.h>
#define PI 3.14159
int main()
{
    int r;
    double area;
    double circumference;
    printf(" enter the radius of the circle");
    scanf("%d",&r);
    area=PI*r*r;
    printf(" the area of circle is %.2f\n" , area);
    circumference=2*PI*r;
    printf(" the circumfernce of circle is %.2f\n" , circumference);
    return 0;
}