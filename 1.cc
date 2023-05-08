#include <iostream>
using namespace std;
void mergeSortedArrays(int *arr1, int *arr2, int *arr3, int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i++];
        }
        else
        {
            arr3[k] = arr2[j++];
        }
        k++;
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[5] = {1, 5, 7, 19, 34};
    int arr2[7] = {2, 4, 8, 8, 12, 17, 19};
    int m = 5;
    int n = 7;
    int arr3[m + n];
    mergeSortedArrays(arr1, arr2, arr3, m, n);
    for (int i = 0; i < m + n; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
