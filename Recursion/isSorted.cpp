#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    int i = 0;
    if (n <= 1)
    {
        return 1;
    }
    else if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        bool ans = isSorted(arr + 1, n - 1);
        return ans;
    }
}

int main()
{
    int arr[6] = {2, 3, 4, 5, 7, 6};
    int n = 6;
    cout << "Sorted: " << ((isSorted(arr, n)) ? "YES" : "NO") << endl;
}