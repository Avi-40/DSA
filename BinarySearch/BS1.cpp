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
            first = mid;
            e = mid - 1;
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
    return first;
}
int lastoccur(int arr[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    int last = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            last = mid;
            s = mid + 1;
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
    return last;
}
int main()
{
    int arr[5] = {2, 2, 3, 3, 5};
    cout << "First Ocurrence is at index: " << firstoccur(arr, 5, 2) << endl;
    cout << "First Ocurrence is at index: " << lastoccur(arr, 5, 2);

    return 0;
}
