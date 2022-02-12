#include <stdio.h>
#include<math.h>

int main()
{
    int i, j, row, col, a[10][10], b[10][10], c[10][10], d[10][10];

    printf("Enter number of rows\t:");
    scanf("%d",&row);
    printf("Enter number of Columns :");
    scanf("%d",&col);

    printf("\nEnter the elements of Matrix A:-\n\n");
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            printf("Enter the element at [%d%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n================================\n");
    }

    printf("Enter the element of matrix B:-\n\n");
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            printf("Enter the element at [%d%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n================================\n\n");
    }
    printf("*************************************\n");
    printf("The Addition of Matrix A and Matrix B\n\n");
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n*******************************************\n");
    printf("The Multiplication of Matrix A and Matrix B\n");
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
     printf("\n");
    for(i = 1;i <= row;i++){
        for(j = 1;j <= col;j++){
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }

}
