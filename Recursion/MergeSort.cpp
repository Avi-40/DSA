#include <iostream>
using namespace std;
long long Merge(int *arr, int s, int e)
{
    long long int inv = 0;
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int index = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[index++];
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[index++];
    }
    // Merge
    int ind1 = 0;
    int ind2 = 0;
    index = s;
    while (ind1 < len1 && ind2 < len2)
    {
        if (first[ind1] < second[ind2])
        {
            arr[index++] = first[ind1++];
        }
        else
        {
            inv += len1 - ind1;
            arr[index++] = second[ind2++];
        }
    }
    while (ind1 < len1)
    {
        arr[index++] = first[ind1++];
    }
    while (ind2 < len2)
    {
        arr[index++] = second[ind2++];
    }

    delete[] first;
    delete[] second;

    return inv;
}
long long MergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;
    long long int inv = 0;
    inv += MergeSort(arr, s, mid);

    inv += MergeSort(arr, mid + 1, e);

    inv += Merge(arr, s, e);
    return inv;
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    int n = 5;
    cout << MergeSort(arr, 0, n - 1) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}