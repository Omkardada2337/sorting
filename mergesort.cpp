#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0; // for left subarray
    int j = 0; // for right subarray
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // if l==r  then there will be only single element with list
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int i;
    system("cls");
    int arr[] = {15, 24, 10, 12, 36};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << " " << endl;
    getch();
}
