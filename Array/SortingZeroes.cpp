#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &nums1, int n)
{

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (nums1[j] != 0)
        {
            swap(nums1[i], nums1[j]);
            i++;
        }
        else
        {
            j--;
        }
    }
}
void printarray(vector<int> arr3, int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr3[i] << " ";
    }
}
int main()
{
    vector<int> arr1 = {0, 3, 5, 0, 9, 0, 0, 9, 0};

    int n = 9;

    Merge(arr1, n);
    printarray(arr1, n);

    return 0;
}
