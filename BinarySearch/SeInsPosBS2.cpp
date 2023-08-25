#include <iostream>
using namespace std;

int firstoccur(int arr[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int first = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
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
        else if (arr[mid + 1] > k && arr[mid - 1] < k)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[4] = {1, 3, 5, 6};
    cout << "Index of target value: " << firstoccur(arr, 4, 2) << endl;

    return 0;
}