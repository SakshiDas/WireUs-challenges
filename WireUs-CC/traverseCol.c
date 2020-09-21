#include <stdio.h>

void main()
{
    int a[20][20];
    int row, col, i , j;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    printf("\nEnter the array: ");
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
          scanf("%d  " , &a[i][j]);
        }
    }

    printf("\n Column wise array:\n ");
     for(int j = 0; j<col; j++){
        for(int i = 0; i<row; i++){
          printf("%d  ", a[i][j]);
        }
        printf("\n");

    }

}

