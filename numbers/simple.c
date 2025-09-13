#include <stdio.h>
#include <math.h>
int main()
{
    float si;
    float A;
    float ci;
    int p;
    int r;
    int t;
    printf(" enter principal , rate and time respectively ");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100.0;
    A=p*(pow(1+(r/100.0),t));
    ci=A-p;
    printf(" simple interest is ");
    printf("%f",si);
    printf(" compound interest is ");
    printf("%f",ci);
    return 0;
}