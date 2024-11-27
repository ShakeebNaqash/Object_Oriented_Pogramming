//Program for matrix operations


#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n];
if (m!=n)
    {
        printf("Keep m and n equal:");
    }
else{
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    int options;
    printf("\nEnter 1 for matrix addition\n2 for matrix subtraction\n3 for matrix multiplication\n4 to find transpose of a matrix: ");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
        printf("Performing matrix addition...\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nMatrix after addition:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        printf("Performing matrix Subtraction...\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        printf("\nMatrix after subtraction:\n");
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;
        case 3:
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                c[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the matrices is:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", c[i][j]);
        }
            printf("\n");
        }

            break;
        case 4:
            printf("Transpose of matrix A is:\n ");
            for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
        printf("Transpose of matrix B is: \n");
             for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", b[j][i]);
            }
            printf("\n");
        }
            
            
        break;
    default:
        printf("Option not found\n");
        break;
    }
}
    return 0;
}
