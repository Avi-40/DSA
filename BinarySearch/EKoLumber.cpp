#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{

    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        if (ans >= m)
        {
            break;
        }
        else if (arr[i] > mid)
        {
            ans += arr[i] - mid;
        }
    }
    if (ans == m)
    {
        return true;
    }
    if (ans < m)
    {
        return true;
    }

    return false;
}

int BinarySearch(int arr[], int n, int m)
{

    int s = 0;

    /*int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }*/
    int e = 20;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int arr[4] = {20, 15, 10, 17};
    int m = 22;
    int n = 4;
    cout << BinarySearch(arr, n, m);
    return 0;
}