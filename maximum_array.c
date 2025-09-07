#include <stdio.h>
int main()
{
    int max=0;
    int min=9;
    int array[]={5,3,2,10,6,1,15,46};
    int size =sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        else if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf(" the maximum number in the array is :%d\n" , max);
    printf(" the minimum number in the array is :%d\n" , min);
    return 0;

}