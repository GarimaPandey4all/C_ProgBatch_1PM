#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10][10][10], i, j, k, n, m, p;

    printf("Enter the number for the size of array[n]:");
    scanf("%d", &n);

    printf("Enter the number for the size of array[m]:");
    scanf("%d", &m);

    printf("Enter the number for the size of array[p]:");
    scanf("%d", &p);

    printf("Enter values in Array[n][m][p]:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    printf("The values in Array[n][m][p]:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                printf("%d\t", array[i][j][k]);
            }
        }
    }

    return 0;
}
