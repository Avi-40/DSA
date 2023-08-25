#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int k)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    int a = search(arr + 1, n - 1, k);
    return a;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 6;
    cout << "Target found or not: " << search(arr, n, k);
}