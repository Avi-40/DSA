#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return arr[0];
    }
    int remsum = sum(arr + 1, n - 1);
    int ans = arr[0] + remsum;
    return
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    cout << sum(arr, n) << endl;
}