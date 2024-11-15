#include <stdio.h>
typedef struct Matrix
{
    int rows;
    int cols;
    int data[100][100];
};
void inputMatrix(struct Matrix *matrix)
{
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &matrix->rows, &matrix->cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < matrix->rows; i++)
        {
        for (int j = 0; j < matrix->cols; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix->data[i][j]);
        }
    }
}
void displayMatrix(struct Matrix matrix)
{
    printf("Matrix:\n");
    for (int i = 0; i < matrix.rows; i++)
        {
        for (int j = 0; j < matrix.cols; j++)
        {
            printf("%d\t", matrix.data[i][j]);
        }
        printf("\n");
    }
}
struct Matrix mulMatrices(struct Matrix matrix1, struct Matrix matrix2)
{
    struct Matrix result;
    result.rows = matrix1.rows;
    result.cols = matrix1.cols;

    for(int i=0;i<matrix1.rows;i++)
    {
    for(int j=0;j<matrix2.cols;j++)
    {
      result.data[i][j]=0;
    for(int k=0;k<result.cols;k++)
    {
      result.data[i][j]+= matrix1.data[i][k] * matrix2.data[k][j];
    }
    }
    }
    return result;
}
int main()
{
    struct Matrix matrix1, matrix2, result;
    printf("Enter details for the first matrix:\n");
    inputMatrix(&matrix1);
    printf("Enter details for the second matrix:\n");
    inputMatrix(&matrix2);
    if (matrix1.cols == matrix2.rows)
    {
        result = mulMatrices(matrix1, matrix2);
        printf("\nMatrix 1:\n");
        displayMatrix(matrix1);
        printf("\nMatrix 2:\n");
        displayMatrix(matrix2);
        printf("\nResultant Matrix (Multiplication of Matrix 1 and Matrix 2):\n");
        displayMatrix(result);
    }
    else
    {
        printf("Matrices cannot be added as they have different dimensions.\n");
    }
    return 0;
}
