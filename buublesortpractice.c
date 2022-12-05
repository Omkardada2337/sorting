#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, n, t, flag, arr[100], pass, j;
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (pass = 0; pass < n - 1; pass++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - pass; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    printf("\n\n*************SORTED ARRAY IS : *****************\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}