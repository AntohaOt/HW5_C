#include <stdio.h>
void main() 
{
    int n, m, min_sum_idx, max_sum_idx;
    scanf("%d %d", &n, &m);
    // Создаем двумерный массив:
    int matrix[n][m];
    // Создаем циклы для заполнения массива по строкам и стобцам:
    for (int rows = 0; rows < n; rows++) 
    {
        for (int cols = 0; cols < m; cols++) 
        {
            scanf("%d", &matrix[rows][cols]);
        }
    }
    int col_sums[m];
    for (int cols = 0; cols < m; cols++) 
    {
        int sum = 0;
        for (int rows = 0; rows < n; rows++) 
        {
            sum += matrix[rows][cols];
        }
        col_sums[cols] = sum;
    }
    min_sum_idx = 0;
    max_sum_idx = 0;
    for (int cols = 1; cols < m; cols++) 
    {
        if (col_sums[cols] < col_sums[min_sum_idx]) 
        {
            min_sum_idx = cols;
        }
        if (col_sums[cols] > col_sums[max_sum_idx]) 
        {
            max_sum_idx = cols;
        }
    }
    for (int rows = 0; rows < n; rows++) 
    {
        int temp = matrix[rows][min_sum_idx];
        matrix[rows][min_sum_idx] = matrix[rows][max_sum_idx];
        matrix[rows][max_sum_idx] = temp;
    }
    for (int rows = 0; rows < n; rows++) 
    {
        for (int cols = 0; cols < m; cols++) 
        {
            printf("%d ", matrix[rows][cols]);
        }
        printf("\n");
  }
}