#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    int ans = -1;
    while (l < r)
    {
        if (arr[l] < ans)
        {
            ans = arr[l];
        }
        else if (arr[r] < ans)
        {
            ans = arr[r];
        }
        l++;
        r--;
    }
    return ans;
}

int main()
{
    arr[5] = {1, 2, 4, 5, 6};
    cout << kthSmallest(arr, 0, 4, )
}