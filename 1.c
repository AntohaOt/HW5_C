#include <stdio.h>

// Создаем функцию swap, которая будет менять 1 и 2 половины:
void sw(int *a, int *b)
{
    // Создаем переменную "ChekPoint" и присваиваем ей содержимое указателя "a":
    int chekPoint = *a;
    // Указателю "а" присваиваем содержимое указателя "b":
    *a = *b;
    // Указателю "b" присваиваем содержимое "chekPoint":
    *b = chekPoint;
}
void main() 
{
    // Определяем размер массива:
    int num;
    scanf("%d", &num);
    // Создаем условие - если длина массива четная и меньше 100 - выполняем программу:
    if (num %2 == 0 || num <= 100)
    {
        // Добавляем массив длиной "num":
        int arr[num];
        // Считываем массив:
        for (int i=0; i<num; i++)
            scanf("%d", &arr[i]);
        // Создаем цикл, который определяет половину массива:
        for (int mid=num/2, i=0; i < mid; i++)
        {
            // С помощью нашей функции меняем 1 и 2 половины:
            sw(&arr[i], &arr[mid+i]);
        }
        // Выводим получившийся массив:
        for (int i=0; i<num; i++)
            printf("%d ", arr[i]);
    }
    // Если длина массива не соответствует требованиям - выводим предупреждающее сообщение:
    else
        printf("Массив не соответствует требованиям");
}