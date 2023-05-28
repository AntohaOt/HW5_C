#include <stdio.h>

void reduce_fraction(int *a, int *b) 
{
    // находим минимальное из числителя и знаменателя
    int min;
    if (*a < *b) 
        min = *a;
    else 
        min = *b;
    for (int i = min; i > 1; i--) 
    {
        if (*a % i == 0 && *b % i == 0) // если оба числа делятся на i без остатка
        { 
            *a /= i; // сокращаем числитель на i
            *b /= i; // сокращаем знаменатель на i
            break; // выходим из цикла
        }
    }
}
void main()
{
    int a=0, b=0;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("%d %d", a, b);
}