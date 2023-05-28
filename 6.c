#include <stdio.h>
#include <stdlib.h>

int abs_arr(int arr[], int n) 
{
    // Создаем переменную "count":
    int count = 0;
    // Создаем цикл, который присваивает указателю *р каждый элемент массива по очереди:
    for (int *p = arr; p < arr + n; p++) 
    {
        // Создаем условие - если число меньше 0 - то возводим его в модуль и прибавляем 1 к счетчику:
        if (*p < 0) 
        {
            count++;
            *p = abs(*p);
        }
    }
    return count;
}

void main() 
{
    int num;
    // Вводим число для определения длины массива:
    scanf("%d", &num);
    // Добавляем массив длиной "num":
    int arr[num];
    for (int i=0; i<num; i++)
        // Считываем массив:
        scanf("%d", &arr[i]);
    // Счетчику присваиваем результат функции:
    int count = abs_arr(arr, num);
    // Выводим значение счетчика:
    printf("%d ", count);
    // С помощью цикла проходимся и выводим полученный массив: 
    for (int i = 0; i < num; i++)
        printf("%d ", arr[i]);
}