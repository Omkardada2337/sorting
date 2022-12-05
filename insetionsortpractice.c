#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, n, t, arr[100], j;
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements in an array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        t = arr[i];// picking one value from the unsorted array and storing it in temp/t
        for (j = i - 1; j >= 0 && arr[j] > t; j--)//starting 'j' from 'i-1' because we want to check it from R TO L in sorted subarray and ending index of sorted subarray is 'i-1'
        {
            arr[j + 1] = arr[j];//swapping the postions 
        }
        arr[j + 1] = t;//assigning the proper position to the temp variable
    }
    printf("\nSorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}