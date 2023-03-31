#include <iostream>
using namespace std;

void UElem(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}

int main()
{
    int arr[5] = {2, 2, 3, 5, 5};
    UElem(arr, 5);

    return 0;
}
