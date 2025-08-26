#include <stdio.h>
int main()
{
    int l;
    int b;
    float area;
    float perimeter;
    printf(" enter length and breath of rectangle");
    scanf("%d%d", &l,&b);
    printf(" the area of rectangle is ");
    area=l*b;
    printf("%f\n", area);
    printf(" the perimeter of rectangle is ");
    perimeter=2*(l+b);
    printf("%f\n" , perimeter);
    return 0;
}

