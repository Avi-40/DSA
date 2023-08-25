#include <iostream>
using namespace std;

void UElem(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
}

int main()
{
    int arr[5] = {2, 2, 2, 2, 2};
    UElem(arr, 5);

    return 0;
}
