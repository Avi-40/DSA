#include <bits/stdc++.h>
using namespace std;

int firstoccur(int arr[], int s, int e, int mid)
{
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
        return mid;
    }
    mid = s + (e - s) / 2;
    if (arr[mid - 1] < arr[mid])
    {
        return firstoccur(arr, s + mid, e, mid);
    }
    else
    {
        return firstoccur(arr, s, mid, mid);
    }
    /*int s = 0;
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
    return ans;*/
}

int main()
{
    int arr[6] = {1, 3, 4, 5, 3, 1};
    int mid = 3;
    cout << "Peak at index: " << firstoccur(arr, 0, 6, mid) << endl;

    return 0;
}