#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int b;
    int c = 0; 

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }

    printf("%d elements of the array are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter a number to find its frequency:\n");
    scanf("%d", &b);

    for (int i = 0; i < n; i++) {
        if (b == a[i]) {
            c++;
        }
    }

    if (c > 0)
        printf("The frequency of %d is: %d\n", b, c);
    else
        printf("The number %d does not exist in the array.\n", b);

    return 0;
}
