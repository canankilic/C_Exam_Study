#include <stdio.h>
#define SIZE 10

void bubbleSort(int work[], int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main()
{
    int counter = 0;
    int arr[SIZE] = {2, 6, 4, 8, 10, 56, 45, 89, 37, 92};

    printf("%s", "Enter 1 to sort in ascending order.\n");
    int order = 0;
    scanf("%d", &order);

    printf("Data items in original order:");

    for (counter = 0; counter < SIZE; counter++)
    {
        printf("%4d", arr[counter]);
    }

    if (order == 1)
    {
        bubbleSort(arr, SIZE, ascending);
        printf("\nData items in ascending order:");
    }

    else
    {
        bubbleSort(arr, SIZE, descending);
        printf("\nData items in descending order:");
    }

    for (counter = 0; counter < SIZE; counter++)
    {
        printf("%4d", arr[counter]);
    }
}

void bubbleSort(int work[], int size, int (*compare)(int a, int b))
{
    void swap(int *element1Ptr, int *element2ptr);

    int pass, count;
    for (pass = 1; pass < size; pass++)
    {
        for (count = 0; count < size - 1; count++)
        {
            if ((*compare)(work[count], work[count + 1]))
            {
                swap(&work[count], &work[count + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

int ascending(int a, int b)
{
    return b < a;
}

int descending(int a, int b)
{
    return a < b;
}

