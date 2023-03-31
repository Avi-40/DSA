#include <algorithm>

void sort012(int *arr, int n)
{
    int i = 0;
    int nextZero = 0;
    int nextTwo = n - 1;

    while (i <= nextTwo)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[nextZero]);
            i++;
            nextZero++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[nextTwo]);
            nextTwo--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[8] = {0, 1, 2, 0, 0, 0, 1};
    swap01(arr, 8);
    printarray(arr, 8);
    return 0;
}
