#include <stdio.h>
int main()
{
    int a[100];
    int n;
    int pos;
    int b;     // element to be deleted 
    printf(" enter number of elements in the array : ");   // number of elements in the array 
    scanf("%d",&n);
    printf(" enter elements in the array \n");
        
    // read elements in the array

    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);      /// for example a[i]={5,6,7,8,9}   i want to delete 7 from index 2 ( 0 se start hota hai )
    }

    printf(" enter the position to delete : ");
    scanf("%d",&pos);

   for(int i=pos-1;i<n-1;i++)   // sifting elements to the left starting from the deleted position
   {
    a[i]=a[i+1];   //replace the element with the next element 
   }
   n--;  // decrease the size of the array 



   for(int i =0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
return 0;



}