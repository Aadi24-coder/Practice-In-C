#include <stdio.h>
int main() {
    int p, q;
    printf("Enter number of elements in first array: ");
    scanf("%d", &p);
    printf("Enter number of elements in second array: ");
    scanf("%d", &q);

    int a[p], b[q];
    int n = p + q;
    int c[n];

    // Input first array
    printf("Enter %d elements in the first array:\n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter %d elements in the second array:\n", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array into c
    for (int i = 0; i < p; i++) {
        c[i] = a[i];
    }

    // Copy second array into c (after first array)
    for (int i = 0; i < q; i++) {
        c[p + i] = b[i];
    }

    // Print merged array
    printf("\nMerged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

