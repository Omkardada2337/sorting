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
int main()
{
    int i, j, n, min, arr[100];
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) // here 'i' refers to the number of passes
    {
        min = i;
        for (j = i + 1; j < n; j++) //-----
        {                           //     |
            if (arr[j] < arr[min])  //     |--> this is the code to find the minimum
            {                       //     |    element from the unsorted subarray
                min = j;            //     |
            }                       //-----
        }
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
    }
    printf("\nSORTED ARRAY IS : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}