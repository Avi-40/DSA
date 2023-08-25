#include <bits/stdc++.h>
using namespace std;
bool solve(int *arr, int n)
{
    int i = 0;
    int j = 1;

    while (i < n)
    {
        arr[i] = arr[i] - 1;
        i = i + 2;
        arr[j] = arr[j] + 1;
        j = j + 2;
    }
    int arr1[100] = {0};
    for (i = 0; i < n; i++)
    {
        arr1[arr[i]]++;
        if (arr1[arr[i]] > 1)
        {
            return false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 1; i < n; i++)
    {
        if (arr1[i] != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[3] = {2, 1, 2};
    int n = 3;
    cout << ((solve(arr, n) ? "YES" : "NO"));
}
/*#include <bits/stdc++.h>
using namespace std;
bool solve(int *arr, int n)
{
    int i = 0;
    int j = 1;

    while (i < n)
    {
        arr[i] = arr[i] - 1;
        i = i + 2;
        arr[j] = arr[j] + 1;
        j = j + 2;
    }
    int arr1[100] = {0};
    for (i = 0; i < n; i++)
    {
        arr1[arr[i]]++;
        if (arr1[arr[i]] > 1)
        {
            return false;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (arr1[i] != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    int i = 0;
    while (i < t)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[j];
        }
        cout << ((solve(arr, n) ? "YES" : "NO")) << endl;
        i++;
    }
}*/