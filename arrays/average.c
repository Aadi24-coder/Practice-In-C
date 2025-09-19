#include <stdio.h>
int main()
{
    double average;
    printf("how many students are there?:\n");
    int n ;
    int sum=0;
    scanf("%d",&n);
    int a[100];
  for(int i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &a[i]);
    sum=sum+a[i];
}
average=(double)sum/n;

printf("%.2lf",average);
return 0;
}
