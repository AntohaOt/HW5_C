#include <stdio.h>
void main() 
{
    // Создаем переменные:
    int n, m;
    // Вводим значения для строк и столбцов:
    scanf("%d %d", &n, &m);
    // Создаем двумерную матрицу:
    int matrix[n][m];
    // Создаем циклы для заполнения массива по строкам и стобцам:
    for (int rows = 0; rows < n; rows++) 
    {
        for (int cols = 0; cols < m; cols++) 
        {
            scanf("%d", &matrix[rows][cols]);
        }
    }
    // Создаем массив для хранения сумм элементов по столбцам:
    int cols_sums[m];
    // Создаем цикл для вычисления сумм по столбцам:
    for (int cols = 0; cols < m; cols++) 
    {
        // Создаем переменную "sum" для накопления суммы по текущему столбцу:
        int sum = 0;
        // Создаем цикл для суммирования элементов текущего столбца:
        for (int rows = 0; rows < n; rows++) 
        {
            // Накопление суммы текущего столбца:
            sum += matrix[rows][cols];
        }
        // Сохранение суммы по текущей колонки:
        cols_sums[cols] = sum;
    }
    // Переменные для индексов столбцов, которые в последующем будем менять местами:
    int min_sum_idx = 0, max_sum_idx = 0;
    // Создаем цикл для определения номеров столбцов с минимальной и максимальной суммами:
    for (int cols = 1; cols < m; cols++) 
    {
        // Создаем условие, которое сравнивает сумму текущего столбца с столбцом с минимальной суммой:
        if (cols_sums[cols] < cols_sums[min_sum_idx]) 
            // Записываем номера текущего столбца в переменную "min_sum_idx":
            min_sum_idx = cols;
        // Создаем условие, которое сравнивает сумму текущего столбца с столбцом с максимальной суммой:
        if (cols_sums[cols] > cols_sums[max_sum_idx]) 
            // Записываем номера текущего столбца в переменную "max_sum_idx":
            max_sum_idx = cols;
        
    }
    // Создаем цикл для замены местами найденных колонок:
    for (int rows = 0; rows < n; rows++) 
    {
        // Создаем временную переменную для обмена двух элементов между собой:
        int temp = matrix[rows][min_sum_idx];
        matrix[rows][min_sum_idx] = matrix[rows][max_sum_idx];
        matrix[rows][max_sum_idx] = temp;
    }
    // Вывод полученной матрцы:
    printf("Полученная матрица: \n");
    for (int rows = 0; rows < n; rows++) 
    {
        for (int cols = 0; cols < m; cols++) 
        {
            printf("%d ", matrix[rows][cols]);
        }
        printf("\n");
  }
}