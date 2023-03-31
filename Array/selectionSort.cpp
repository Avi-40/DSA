#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {10, 8, 6, 4, 2};
    for (int i = 0; i < 3; i++)
    {
        int min = i;
        for (int j = i + 1; j <= 4; j++)
            if (arr[j] < arr[min])
            {
                min = j;
            }
        swap(arr[i], arr[min]);
    }
    printarray(arr, 5);
}