#include <stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    float area;
    printf(" enter coordinates of point 1 (x1,y1)");
    scanf("%f%f" , &x1,&y1);
    printf(" enter coordinates of point 2 (x2,y2)");
    scanf("%f%f" , &x2,&y2);
    printf(" enter coordinates of point 3 (x3,y3)");
    scanf("%f %f ",&x3 , &y3);
    area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    if(area==0.0)
    {
        printf(" points are collinear ");
    }
    else 
    {
        printf(" points are non collinear");
    }
    return 0;



}