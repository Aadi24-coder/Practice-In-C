#include <stdio.h>

void arraysort(int array[], int size)
{
   for(int i =0;i<size-1;i++)
   {
    for(int j=0;j<size-1;j++)
    {
        if(array[j]>array[j+1])
        {
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
   }
}
void printarray(int array[],int size)
{
    for(int i =0;i<size;i++)
    {
        printf("%d " , i);
    }
}
int main()
{
    int array[]={5,4,7,9,1,0};
    int size=sizeof(array)/sizeof(array[0]);
     arraysort(array ,size);
    printf(" sorted array is :");
    printarray(array,size);
    return 0;

}
