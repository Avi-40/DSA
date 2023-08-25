#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int p = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (p >= arr[i])
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);
    int i = 0;
    int j = e;
    while (i < p && p < j)
    {
        if (arr[i] < p) // use while loop for faster:- while(arr[i]<p){i++;}
        {
            i++;
        }
        else if (arr[j] > p) // use while loop for faster:- while(arr[j]>p){j--;}
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void QuickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        cout << s << " " << e << endl;
        return;
    }
    int p = partition(arr, s, e);

    QuickSort(arr, s, p - 1);

    QuickSort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    int n = 5;
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}