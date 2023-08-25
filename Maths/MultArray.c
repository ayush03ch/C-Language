// WAP to multiply two ararys
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, n1, m2, n2;
    input:
    {
        printf("Enter order(m,n) of first array : ");
        scanf("%d %d", &m1, &n1);
        printf("Enter order(m,n) of second array : ");
        scanf("%d %d", &m2, &n2);
    }
    if (n1 != m2)
    {
        printf("These matrix can't be multiplied, Invalid order matrices.\nTwo matrices can be multiplied if they are of order (m,n) & (n,p), p can be equal to m\n\n");
        goto input;
    }

    int a[m1][n1], b[m2][n2], i, j, k;
    int mult[m1][n2];

    printf("Enter elements of first array: \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
            scanf("%d", &a[i][j]);
        // printf("\n");
    }

    printf("Enter elements of second array: \n");
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
            scanf("%d", &b[i][j]);
        // printf("\n");
    }

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            mult[i][j] = 0;
            for (k = 0; k < n1; k++)
                mult[i][j] += a[i][k] * b[k][j];
        }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }

    return 0;
}