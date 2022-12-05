#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int *, int *);
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int partition(int *arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[end], &arr[lb]);
    return end;
}
void quicksort(int *arr, int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int main()
{
    int i, n, j, t, arr[100];
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("\nSORTED ARRAY IS : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}