#include <iostream>
using namespace std;

int firstoccur(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = arr[mid];
            break;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[6] = {1, 3, 5, 4, 3, 1};
    cout << "Index of target value: " << firstoccur(arr, 6) << endl;

    return 0;
}