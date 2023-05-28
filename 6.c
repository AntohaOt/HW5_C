#include <stdio.h>
#include <stdlib.h>

int abs_arr(int arr[], int n) 
{
    int count = 0;
    for (int *p = arr; p < arr + n; p++) 
    {
        if (*p < 0) 
        {
            count++;
            *p = abs(*p);
        }
    }
    return count;
}

int main() 
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i=0; i<num; i++)
        scanf("%d", &arr[i]);
    int count = abs_arr(arr, num);

    printf("%d ", count);
    for (int i = 0; i < num; i++) 
        printf("%d ", arr[i]);
    return 0;
}