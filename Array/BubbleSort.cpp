#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        cout << "Round" << i << endl;

        for (int j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

                printarray(arr, 5);
            }
    }
    printarray(arr, 5);
}