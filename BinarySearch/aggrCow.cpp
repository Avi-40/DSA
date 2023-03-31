#include <iostream>
using namespace std;
int BinarySearch(int arr1[], int k)
{
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < 4; i++)
    {
        maxi = max(maxi, arr1[i]);
        /* code */
    }

    int e = maxi;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (isPossible(arr1, k, mid))
        {
            ans = arr[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    int k = 2;
    cout << BinarySearch(arr, k);
}