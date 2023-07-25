#include <stdio.h>

void inputMatrix(int matrix[][100], int s) 
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i<s; i++) 
	{
        for (int j = 0; j < s; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
}

void generateMatrix(int matrix[][100], int s) 
{
    int rowSum = 0;
    int colSum = 0;

       for (int j = 0; j < s; j++) 
	   {
        rowSum += matrix[0][j];
		}

    for (int i = 1; i < s; i++) 
	{
        for (int j = 0; j < s; j++) 
		{
            matrix[i][j] = rowSum - matrix[0][j];
        }
    }

    for (int i = 0; i < s; i++) 
	{
        colSum += matrix[i][0];
    }

    for (int i = 0; i < s; i++) 
	{
        for (int j = 1; j < s; j++) 
		{
            matrix[i][j] = colSum - matrix[i][0];
        }
    }
}

void printMatrix(int matrix[][100], int s) 
{
    printf("Sum of Rows And columns Will Be:\n");
    for (int i = 0; i < s; i++) 
	{
        for (int j = 0; j < s; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int s;
	printf("Enter the size of the matrix: ");
    scanf("%d", &s);
	int matrix[100][100];
	inputMatrix(matrix, s);
	generateMatrix(matrix, s);
	printMatrix(matrix, s);
return 0;
}