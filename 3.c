#include <stdio.h>

// Структура перемещения из ТЗ:
struct Move
{
	int x;
	int y;
};
// Функция перемещения из ТЗ, но в нее добавлен бот, которго мы смещаем на "a" и "b" относительно его текущей позиции: 
void move(struct Move *bot, int a, int b)
{
    // Смещаем координаты через указатель на стркуктуру:
    bot->x+=a;
    bot->y+=b;
};
// Обходит массив движений и смещает бота, относительно начальной позиции (0;0):
struct Move getFinishPoint(struct Move arr[], int n)
{
    struct Move bot;
    bot.x=0;
    bot.y=0;
    for (int i=0; i < n; i++)
        move(&bot, arr[i].x, arr[i].y);
    return bot;    
}

void main()
{
    struct Move movies[5] = {{15, 34}, {53, -45}, {-23, 40}, {11, 67}, {-34, 59}};
    struct Move bot = getFinishPoint(movies, 5);

    printf("%d %d", bot.x, bot.y);
}