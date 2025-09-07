#include <stdio.h>
int main()
{
    int array[]={5,6,7,4,9,14,56};
    int sum=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i =0;i<size;i++)
    {
        sum+=array[i];
    }
    printf(" the sum of array elements is :%d\n" , sum);
    return 0;
}