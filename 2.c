#include <stdio.h>

// Структура из ТЗ:
struct Person
{
	int age; // возраст
	char name[30]; // имя
};

// Функция, которая в качестве аргумента принимает массив из n структур типа Person и считает средний возраст:
float averageAge(struct Person arr[], int n)
{   
    // Добавляем переменную "sum":
    int sum = 0;
    // Создаем цикл, который проходится по массиву:
    for (int i=0; i < n; i++)
        // Суммируем каждый возраст в массиве:
        sum += arr[i].age;
    // Получившиюся сумму делим на количество структур. Возвращаем полученное число с типом данных float:  
    return (float)sum/n;     
}

// Проверка скрипта:
void main()
{
    // Создаем структуру с возрастом и именами: 
    struct Person prs[5] = {{15, "Anton"}, {53,"Anton"}, {23,"Anton"}, {11,"Anton"}, {34,"Anton"}};
    // В ответ выводим результат выполнения функции:
    printf("%f", averageAge(prs, 5));
}