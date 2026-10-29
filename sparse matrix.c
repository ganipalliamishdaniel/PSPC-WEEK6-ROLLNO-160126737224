#include<stdio.h>

int main()
{
    int a[3][3], i, j, count = 0;

    printf("Enter matrix A:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix A is:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j] == 0)
            {
                count++;
            }
        }
    }

    if(count > 0)
    {
        ;printf("Not a sparse matrix");
    }
    else
    {
        
        printf("Sparse matrix");
    }

    return 0;
}
