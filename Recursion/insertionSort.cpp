#include <iostream>
using namespace std;
void BubbleSort(int *arr, int n, int i)
{
    if (i == n)
    {
        return;
    }
    int j = i - 1;
    int temp = arr[i];
    while (j >= 0)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
        j--;
    }
    arr[j + 1] = temp;
    BubbleSort(arr, n, i + 1);
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    int n = 5;
    BubbleSort(arr, n, 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}