#include <iostream>

using namespace std;
int getmin(int arr[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
int getmax(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << getmin(arr, n);
    cout << getmax(arr, n);
}
