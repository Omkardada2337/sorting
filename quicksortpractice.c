#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int partition(int *arr, int l, int h)
{
    int i = l;
    int j = h;
    int pivot = arr[l];
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[j], &arr[l]);
    return j;
}

void QuickSort(int *arr, int l, int h)
{
    int loc;
    if (l < h)
    {
        loc = partition(arr, l, h);
        QuickSort(arr, l, loc - 1);
        QuickSort(arr, loc + 1, h);
    }
}
int main()
{
    int i, n, t, arr[100], j;
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    QuickSort(arr, 0, n - 1);
    printf("\nSORTED ARRAY IS : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}

// 11
// 41
// 41
// 54
// 54
// 885
// 551
// 55
// 51
// 585
/*
______________________________________________________________________________________________
_______________________________________QUICK SORT_____________________________________________

  1) it is the technique in which the partition method is used
  2) it is also known as 'SELECTION EXCHANGE SORT' or 'PARTITION EXCHANGE SORT' or 'QUICK SORT'
  3) in this sort the position for selected element is found(i.e. for pivot element)
  4) in case of selection sort an position is selected and for that the element is found
  5) one of the best method that selection , bubble , insertin sort





*/