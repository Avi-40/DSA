#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[6] = {7, 8, 9, 1, 3, 4};
    cout << "Index of target value: " << pivot(arr, 6) << endl;

    return 0;
}