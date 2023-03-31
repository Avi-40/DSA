#include <iostream>
using namespace std;

int BinarySearch(int arr[], int s1, int e1, int k)
{
    int s = s1;
    int e = e1;
    cout << s << " " << e << endl;
    int mid = s + (e - s) / 2;
    cout << "Inside BinarySearch " << endl;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            cout << "Found it" << endl
                 << mid;
            ;
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Failed";
    return -1;
}

int Getpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    cout << "Geting pivot " << s << endl;
    return s;
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int k = 7;
    int pivot = Getpivot(arr, 6);
    if (k >= arr[pivot] && k <= arr[6])
    {
        cout << "In Line 2 " << endl;
        return BinarySearch(arr, pivot, 6, k);
    }
    else
    {
        cout << "In Line 1 " << endl;
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}