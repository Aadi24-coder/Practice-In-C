#include <stdio.h>
int main()
{
    int rev=0;
    int array[]={5,6,32,22,87,10};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size/2;i++,size--)
    {
        int temp=array[i];
        array[i]=array[size-1];
        array[size-1]=temp;
    }
    for(int i =0;i<sizeof(array)/sizeof(array[0]);i++)
    {
        printf("%d " , array[i]);
    }
    return 0;
}