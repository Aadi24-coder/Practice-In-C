#include <stdio.h>
int main()
{
    int sum[100][100];
    int a[100][100]; // matrix 1 
    int b[100][100]; // matrix 2
    int p,q,m,n;
    printf(" enter number of rows and coloums for the first matrix(p,q)\n");
    scanf("%d %d", &p , &q);
    printf(" enter number of rows and coloums for the second matrix(m,n)\n");
    scanf("%d %d", &m,&n);
    printf("Enter elements of first matrix (%d x %d):\n", p, q);
    for(int i=0;i<p;i++)
    {
        for(int j =0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
                }
    }
    printf("Enter elements of first matrix (%d x %d):\n", p, q);
    for(int i=0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    printf(" matrix 1 is  :\n");

    for(int i=0;i<p;i++)
    {
        for(int j =0;j<q;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf(" matrix 1 is  :\n");
    for(int i=0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for(int i =0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf(" sum of two matrices are:\n");
    for(int i =0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%4d",sum[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}