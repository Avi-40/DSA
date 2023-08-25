#include <iostream>
using namespace std;
void BubbleSort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    BubbleSort(arr, n - 1);
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    int n = 5;
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}