#include <stdio.h>
#include <stdlib.h>

int *array_input(int *size)
{
    int n;
    printf("Размер массива = ");
    scanf(" %d", &n);
    printf("\n");

    int *array = malloc(n * sizeof(int));

    if(array == NULL)
    {
        printf("Нулевой массив\n");
        *size = 0;
        return NULL;
    }

    for(int i = 0; i < n; i ++)
    {
        printf("число %d = ", i);
        scanf(" %d", array + i);
        printf("\n");
        
    }

    *size = n;

    return array;
}

int massive_stat(int size, int array[])
{
    
    int sum = 0;
    int max = array[0];
    int min = array[0];
    int count_p = 0;
    int count_n = 0;

    for(int i = 0; i < size; i++)
    {
        sum += array[i];
        max = max < array[i] ? array[i] : max;
        min = min > array[i] ? array[i] : min;
        count_p += (array[i] >= 0);
        count_n += (array[i] <  0);
    } 

    float average = sum / size;

    printf("Sum = %d \n", sum);
    printf("Max = %d \n", max);
    printf("Min = %d \n", min);
    printf("Positive = %d \n", count_p);
    printf("Negative = %d \n", count_n);
    printf("Average  = %f \n", average);

    return 0;
}

int find_num(int size, int array[])
{
    int x;
    printf("Какое число ищём: ");
    scanf(" %d", &x);

    for (int i = 0; i < size; i++)
    {
        if(array[i] == x)
        {
            return i;
        }
    }
    printf("Нет такого числа\n");
    return -1;
}

void swap_array(int size, int array[])
{
    int temp = 0;

    for (int i = 0; i < size/2; i++)
    {
        temp = array[i];
        array[i] = array[size-1 - i];
        array[size-1 - i] = temp;
    }
    
}

int *sort_array(int size, int array[])
{
    int *sort_array = malloc(size * sizeof(int));

    if (sort_array == NULL)
    {
        return NULL;
    }
    
    sort_array = array;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(sort_array[j] > sort_array[j + 1])
            {
                int temp = sort_array[j];
                sort_array[j] = sort_array[j + 1];
                sort_array[j + 1] = temp;
            }
        }
    }

    return sort_array;
}

int main(void)
{
    
    int n;
    int *array = array_input(&n);
    if(array == NULL)
    {
        return 1;
    }
    
    //massive_stat(n, array);
    
    //int idx = find_num(n, array);
    //printf("Index = %d\n", idx);

    //swap_array(n, array);
    //for (int i = 0; i < n; i++)
    //{
    //    printf("%d\n", array[i]);
    //}

    /*
    int *sorting_array = sort_array(n, array);
    if(sorting_array == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sorting_array[i]);
    }
    */

    free(array);

    return 0;
}