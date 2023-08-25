#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &nums1, int n, vector<int> &nums2, int m)
{
    /*int i = 0;
    int j = 0;
    int k = 0;
    vector <int>
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }*/
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> res;

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            res.push_back(nums1[i++]);
        }
        else
        {
            res.push_back(nums2[j++]);
        }
    }

    while (i < n)
    {

        res.push_back(nums1[i++]);
    }

    while (j < m)
    {
        res.push_back(nums2[j++]);
    }

    if (nums1[i] == nums2[j])
    {
        res.push_back(nums1[i++]);
        res.push_back(nums2[j++]);
    }

    for (int x = 0; x < 9; x++)
        nums1[x] = res[x];
    for (int i = 0; i < 9; i++)
    {
        cout << nums1[i] << " ";
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
    vector<int> arr1 = {1, 3, 5, 7, 9, 0, 0, 0, 0};
    vector<int> arr2 = {2, 4, 6, 8};
    int n = 5;
    int m = 4;
    Merge(arr1, n, arr2, m);

    return 0;
}
