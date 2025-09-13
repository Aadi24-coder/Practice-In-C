#include <stdio.h>
int main()
{
    float weight ;
    float height;
    float bmi;
    printf(" enter weight of person in kg");
    scanf("%f", &weight);
    printf(" enter height of the person in meters ");
    scanf(" %f ", &height );
    bmi=weight/(height*height);
    if(bmi<15)
    {
        printf(" bmi of the person is %2f\n" ,bmi );
        printf(" the person is in the starvation range");
    }
    else if(bmi>=15.1&&bmi<=17.5)
    {
      printf(" the bmi of the person is %2f\n " , bmi);
      printf(" the person is in the aneroxic range ");
    }
    else if(bmi>=17.6&&bmi<=18.5)
    {
        printf(" the bmi of the person is %2f\n" , bmi);
        printf(" the person is in the underweight range");
    }
    else if(bmi>=18.6&&bmi<=24.9)
    {
        printf(" the bmi of the person is %2f\n",bmi);
        printf(" the person is in ideal range");
    }
    else if(bmi>=25&&bmi<=25.9)
    {
        printf(" the bmi of the person is %2f\n" , bmi);
        printf(" the person is in overweight range ");
    }
    else if(bmi>=30&&bmi<=39.9)
    {
        printf(" the bmi of the person is %2f\n" , bmi);
        printf(" the person is in the obese range");
    }
    return 0;
    
}