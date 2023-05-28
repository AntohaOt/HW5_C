#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person arr[], int n)
{   
    int sum = 0;
    for (int i=0; i < n; i++)
        sum += arr[i].age;
    return (float)sum/n;     
}

// Проаерка скрипта:
void main()
{
    struct Person prs[5] = {{15, "Anton"}, {53,"Anton"}, {23,"Anton"}, {11,"Anton"}, {34,"Anton"}};
    printf("%f", averageAge(prs, 5));
}