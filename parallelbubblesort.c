#include <stdio.h>
using namespace std;

void parallelbubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 14, 7, 35, 62, 98, 21, 78, 51, 80, 43 };
    int n = sizeof(arr) / sizeof(arr[0]);
    parallelbubbleSort(arr, n);
    cout << "Sorted Array: \n";
    printArray(arr, n);

    return 0;
}