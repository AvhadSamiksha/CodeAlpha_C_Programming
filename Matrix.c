#include <stdio.h>
int main()
{
    int i,j,n,k, a[2][2], b[2][2], c[2][2];
    int d[2][2] = {0};
    printf("\nEnter elenemts of matrix 1 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elenemts of matrix 2 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix 1 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
    printf("\nMatrix 2 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
    }
    printf("\nFor addition, enter 1. For multiplication, enter 2. For transpose, enter 3.\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nAddition of the given matrices is : \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n\n");
        }
        break;

        case 2:
        printf("\nMultiplication of the given matrices is : \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                    d[i][j] = d[i][j] + a[i][k] * b[k][j];    
                }
                printf("%d\t",d[i][j]);
            }
            printf("\n\n");
        }
        break;

        case 3: 
        printf("\nTranspose of the given matrices is : \n");
        printf("\nTranspose of Matrix 1 is : \n");
        for(j=0;j<2;j++)
        {
            for(i=0;i<2;i++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n\n");
        }
        printf("\nTranspose of Matrix 2 is : \n");
        for(j=0;j<2;j++)
        {
            for(i=0;i<2;i++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n\n");
        }
        break;
    }
    return 0;
}