#include <stdio.h>
#define N 6
int main()
{
    int i, pass;
    int arr[] = {5, 4, 10, 1, 6, 2};
    for (pass = 0; pass < N - 1; pass++)
    {
        int minIndex = pass;
        for (i = pass + 1; i < N; i++)
        {
            if (arr[i] <= arr[minIndex])
                minIndex = i;
        }
        if (minIndex != pass)  // as we have assigned the minIndex = pass at starting
        {                      // faltu ki swapping se time bachega
            int t = arr[pass]; // swapping
            arr[pass] = arr[minIndex];
            arr[minIndex] = t;
        }
    }
    for (i = 0; i < N; i++)
        printf(" %d ", arr[i]);
    return 0;
}